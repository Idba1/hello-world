#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);

    // side case
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *b = new Node(300);
    Node *c = new Node(400);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_tail(head, 500);
    insert_at_tail(head, 600);
    insert_at_tail(head, 700);
    print_linked_list(head);

    return 0;
}