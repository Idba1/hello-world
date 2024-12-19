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

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void deleted_at_any_pos(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
    {
        return;
    }

    if (idx == 0)
    {
        Node *deletedNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deletedNode;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        if (temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    Node *deletedNode = temp->next;
    if (deletedNode == NULL)
    {
        return;
    }

    temp->next = deletedNode->next;
    if (deletedNode->next == NULL)
    {
        tail = temp;
    }
    delete deletedNode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->next != NULL)
        {
            cout << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int pos, value;
        cin >> pos >> value;
        if (pos == 0)
        {
            insert_at_head(head, tail, value);
        }
        else if (pos == 1)
        {
            insert_at_tail(head, tail, value);
        }
        else if (pos == 2)
        {
            deleted_at_any_pos(head, tail, value);
        }

        print_linked_list(head);
    }

    return 0;
}
