#include <iostream>
#include <vector>
using namespace std;

class Queue
{
private:
    vector<int> arr;
    int front = 0;
    int rear = -1;

public:
    void insert(int item)
    {
        this->rear++;
        this->arr[this->rear] = item;
    }

    void remove()
    {
        this->front++;
    }

    bool isEmpty()
    {
        return this->front == this->rear;
    }

    void print()
    {
        cout << "\n ------------- Printing ----------" << endl;
        for (int i = this->front; i <= this->rear; i++)
        {
            cout << this->arr[i] + " ";
        }
    }
};

int main()
{
    // Creating Queue
    Queue *queue = new Queue();
    queue->insert(25);
    queue->insert(34);
    queue->insert(12);
    queue->insert(3);
    queue->insert(87);
    queue->insert(43);
    queue->insert(29);
    queue->print();
    queue->remove();
    queue->print();
}