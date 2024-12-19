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
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

bool check_same(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->value != temp2->value)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL)
    {
        return false;
    }
    return true;
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, value);
    }

    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, value);
    }

    if (check_same(head1, head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
