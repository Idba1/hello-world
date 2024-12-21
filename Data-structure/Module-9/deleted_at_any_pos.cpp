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

void deleted_at_any_pos(Node *&head, int idx)
{
    Node *temp = head;
    // if (head == NULL)
    // {
    //     head = NULL;
    //     temp = NULL;
    // }
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deletedNode;
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
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a->next;
    b->next = tail;
    tail->prev = a;

    print_forward(head);

    deleted_at_any_pos(head, 2);
    print_forward(head);

    return 0;
}