#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string value;
    Node *next;
    Node *prev;
    Node(string value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void visit(Node *&head, Node *&current, string &address)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->value == address)
        {
            current = temp;
            cout << current->value << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}

void next(Node *&current)
{
    if (current != NULL && current->next != NULL)
    {
        current = current->next;
        cout << current->value << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node *&current)
{
    if (current != NULL && current->prev != NULL)
    {
        current = current->prev;
        cout << current->value << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        string value;
        cin >> value;
        if (value == "end")
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    Node *current = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;
            visit(head, current, address);
        }
        else if (command == "next")
        {
            next(current);
        }
        else if (command == "prev")
        {
            prev(current);
        }
    }

    return 0;
}