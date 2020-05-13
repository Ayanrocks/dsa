#include <iostream>

using namespace std;

struct LinkedList
{
    int value;
    LinkedList *next;
};

LinkedList *head = NULL;
LinkedList *tail = head;

void insert(int value, int index = NULL)
{
    LinkedList newNode;
    newNode.value = value;
    newNode.next = head;
    if (!head)
    {
        head = &newNode;
    }
    else
    {
        if (index)
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