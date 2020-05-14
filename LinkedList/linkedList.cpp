#include <iostream>

using namespace std;

struct LinkedList
{
    int value;
    LinkedList *next;
};

LinkedList *head = NULL;
LinkedList *tail = head;

void insert(int value, int index = -1)
{
    LinkedList newNode;
    newNode.value = value;
    newNode.next = head;
    if (!head)
    {
        head = &newNode;
        tail = &newNode;
    }
    else
    {
        if (index != -1)
        {
            if (index == 0)
            {
                newNode.next = head;
                head = &newNode;
            }

            LinkedList *currentNode = head;
            LinkedList *parentNode = currentNode;
            int pos = 0;
            while (currentNode->next != NULL)
            {
                if (index == pos)
                {
                    newNode.next = parentNode->next;
                    parentNode->next = &newNode;
                }
                pos++;
            }
        }
        else
        {
            tail->next = &newNode;
        }
        tail = tail->next;
    }
}

void remove(int node)
{
    if (!head)
    {
        cout << "Linked List Empty" << endl;
        return;
    }
    if (node == head->value)
    {
        head = head->next;
        return;
    }

    LinkedList *currentNode = head;
    LinkedList *parentNode = currentNode;

    while (currentNode->next != NULL)
    {
        if (currentNode->value == node)
        {
            parentNode->next = currentNode->next;
            break;
        }
    }

    if (currentNode->value == tail->value)
    {
        tail = parentNode;
        tail->next = NULL;
    }
}

void print()
{
    LinkedList *currentNode = head;
    while (currentNode->next != NULL)
    {
        cout << currentNode->value << " -> ";
        currentNode = currentNode->next;
    }

    cout << currentNode->value << " -> " << endl;
}

int main()
{
    LinkedList ll;
    ll.value = 10;
    insert(25);
    insert(34);
    insert(12);
    insert(3);
    insert(87);
    insert(43);
    insert(29);
    insert(56);
    print();
    insert(89);
    remove(29);
    print();
    remove(10);
    remove(89);
    print();

    return 0;
}