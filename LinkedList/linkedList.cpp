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
    // Dynamically allocated memory block;
    // LinkedList *newNode = (LinkedList *)malloc(sizeof(LinkedList));
    LinkedList *newNode = new LinkedList;
    newNode->value = value;
    newNode->next = NULL;
    // if head is not there
    if (!head)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        // inserting if index is specified
        if (index != -1)
        {
            // inserting at begining
            if (index == 0)
            {
                newNode->next = head;
                head = newNode;
            }

            LinkedList *currentNode = head;
            LinkedList *parentNode = currentNode;
            int pos = 0;
            while (currentNode->next != NULL)
            {
                // if index and position match
                if (index == pos)
                {
                    // point newnode to the current Node and shift parent node to point newNode
                    newNode->next = parentNode->next;
                    parentNode->next = newNode;
                }
                pos++;
            }
        } // If index is not specified insert at the end
        else
        {
            tail->next = newNode;
        }
        // Increment tail to the new node attached
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
    // deleteing the first node
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
            // removing currentNode by pointing the parent to the next node
            parentNode->next = currentNode->next;
            delete currentNode;
            break;
        }
        parentNode = currentNode;
        currentNode = currentNode->next;
    }

    if (currentNode->value == tail->value)
    {
        tail = parentNode;
        delete tail->next;
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