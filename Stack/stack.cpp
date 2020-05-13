#include <iostream>
#include <vector>

class Stack
{
private:
    // std::vector<int> arr = {};
    int arr[10] = {};
    int top = -1;

public:
    void insert(int item)
    {
        // this->arr.push_back(item);
        if (this->top <= 10)
        {
            this->top++;
            this->arr[top] = item;
        }
    }

    void remove()
    {
        if (!this->isEmpty())
        {

            // this->arr.pop_back();
            this->top--;
        }
    }

    int isEmpty()
    {
        // return this->arr.size() == 0;
        return this->top + 1 == 0;
    }

    int peek()
    {
        // return this->arr.back();
        std::cout << "Peek: " << this->arr[top] << std::endl;
        return this->arr[top];
    }

    void print()
    {
        std::cout << "\n---------- Printing ---------\n"
                  << std::endl;
        // for (int i = this->arr.size() - 1; i >= 0; i--)
        // {
        //     std::cout << this->arr[i] << std::endl;
        // }
        for (int i = this->top; i >= 0; i--)
        {
            std::cout << this->arr[i] << std::endl;
        }
    }
};

int main()
{
    auto stack = new Stack();
    stack->insert(25);
    stack->insert(34);
    stack->insert(12);
    stack->insert(3);
    stack->insert(87);
    stack->insert(43);
    stack->insert(29);
    stack->print();
    stack->remove();
    stack->print();
    stack->peek();
    return 1;
}