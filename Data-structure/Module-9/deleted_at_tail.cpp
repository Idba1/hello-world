#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void deleted_tail(Node *&head, Node *&tail)
{
    Node *deletedNode = tail;
    tail = tail->prev;
    delete deletedNode;
    // side case
    if (tail == NULL)
    {
        head = NULL;
        cout << "empty list" << endl;
        return;
    }
    tail->next = NULL;
}

void print_forward(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    print_forward(head);

    deleted_tail(head, tail);
    print_forward(head);

    deleted_tail(head, tail);
    print_forward(head);

    deleted_tail(head, tail);
    print_forward(head);

    return 0;
}