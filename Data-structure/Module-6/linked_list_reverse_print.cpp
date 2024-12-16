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

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    // side case
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
};

void print_reverse(Node *temp)
{
    // base case
    if (temp == NULL)
    {
        return;
    }
    print_reverse(temp->next);
    cout << temp->value << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true) // complexity O(N)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value); // complexity O(1)
    }

    print_reverse(head);

    return 0;
}