#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node *&head, int val)
{
    Node *node = new Node(val);

    if (head == NULL)
    {
        head = node;
        node->next = head;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    node->next = head;
    temp->next = node;
}

void insertAtBegin(Node *&head, int val)
{

    Node *node = new Node(val);
    if (head == NULL)
    {
        head = node;
        node->next = head;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node->next = head;
    temp->next = node;
    head = node;
}

void insertAtPosition(Node *&head, int val, int n)
{
    Node *node = new Node(val);
    if (n == 1)
    {
        if (head == NULL)
        {
            head = node;
            node->next = head;
            return;
        }
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        node->next = head;
        temp->next = node;
        head = node;
    }

    Node *temp = head;
    for (int i = 1; i < n - 1 && temp->next != head; i++)
    {
        temp = temp->next;
    }

    node->next = temp->next;
    temp->next = node;
}

void deleteAtEnd(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
    {
        return;
    }

    if (head->next == head)
    {
        delete head;
        head = NULL;
        return;
    }

    while (temp->next->next != head)
    {
        temp = temp->next;
    }

    Node *todel = temp->next;
    temp->next = head;
    delete todel;
}

void deleteAtBegin(Node *&head)
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == head)
    {
        delete head;
        head = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    Node *todel = head;
    head = head->next;
    temp->next = head;
    delete todel;
}

void deleteAtPosition(Node *&head, int n)
{
    Node *temp = head;

    if (head == NULL)
    {
        return;
    }

    if (head->next == head)
    {
        delete head;
        head = NULL;
        return;
    }

    if (n == 1)
    {
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }

        Node *todel = head;
        head = head->next;
        temp->next = head;
        delete todel;
        return;
    }
    for (int i = 1; i < n - 1 && temp->next != head; i++)
    {
        temp = temp->next;
    }

    if (temp->next == head)
    {
        return;
    }

    Node *todel = temp->next;
    temp->next = todel->next;
    delete todel;
}

void printcircularlist(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    Node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    printcircularlist(head);

    cout << endl;

    insertAtBegin(head, 0);
    insertAtBegin(head, 9);
    printcircularlist(head);

    insertAtPosition(head, 6, 10);

    cout << endl;
    printcircularlist(head);

    cout << endl;
    deleteAtEnd(head);

    printcircularlist(head);

    cout << endl;

    deleteAtBegin(head);

    printcircularlist(head);

    cout << endl;
    deleteAtPosition(head, 2);

    printcircularlist(head);
}