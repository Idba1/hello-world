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
};

int difference(Node *&head)
{
    if (head == NULL)
    {
        return 0;
    }

    int max_value = head->value;
    int min_value = head->value;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->value > max_value)
        {
            max_value = temp->value;
        }
        if (temp->value < min_value)
        {
            min_value = temp->value;
        }
        temp = temp->next;
    }
    return max_value - min_value;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    int getDifference = difference(head);
    cout << getDifference << endl;

    return 0;
}
