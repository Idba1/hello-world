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

void deleted_at_tail(Node *&head, Node *&tail, int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deletedNode = temp->next;
    temp->next = temp->next->next;
    delete deletedNode;
    tail = temp;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    // cout << endl;
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

    cout << "tail before delete " << tail->value << endl;
    deleted_at_tail(head, tail, 3);
    print_linked_list(head);
    cout << "tail after delete " << tail->value << endl;

    return 0;
}