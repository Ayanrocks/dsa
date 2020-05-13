#include <iostream>
#include <vector>

using namespace std;

class CQueue
{
private:
    int arr[10];
    int front;
    int rear;

public:
    CQueue()
    {
        rear = front = -1;
    }

    bool isEmpty()
    {
        if (front == 0 && rear == 9)
        {
            return false;
        }
        if (front == rear + 1)
        {
            return false;
        }
        return true;
    }

    void insert(int item)
    {
        if (!isEmpty())
        {
            cout << "Queue is full";
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            // (rear+1) % SIZE
            rear = (rear + 1) % 10;
            arr[rear] = item;
        }
    }

    void remove()
    {
        if (isEmpty())
        {
            cout << "Queue is empty";
        }
        else
        {
            if (front == rear)
            {
                // only one element in queue, reset queue after removal
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % 10;
            }
        }
    }

    void print()
    {
        cout << "\n-------------- Printing ----------";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] + " ";
        }
    }
};

int main()
{
    // Creating CQueue
    CQueue cqueue;
    cqueue.insert(25);
    cqueue.insert(34);
    cqueue.insert(12);
    cqueue.insert(3);
    cqueue.insert(87);
    cqueue.insert(43);
    cqueue.insert(29);
    cqueue.print();
    cqueue.remove();
    cqueue.print();
}