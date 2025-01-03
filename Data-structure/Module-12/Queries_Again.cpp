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

void insert_at_any_pos(Node *&head, int idx, int value, bool &isValid)
{
    Node *newNode = new Node(value);
    isValid = true;
    if (idx == 0)
    {
        newNode->next = head;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Node *temp = head;
    int i = 0;
    while (temp != NULL && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        cout << "Invalid" << endl;
        isValid = false;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void print_left_to_right(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_right_to_left(Node *&head)
{
    if (head == NULL)
    {
        cout << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int q;
    cin >> q;

    while (q--)
    {
        int index, value;
        bool isValid = true;
        cin >> index >> value;

        insert_at_any_pos(head, index, value, isValid);

        if (isValid)
        {
            cout << "L -> ";
            print_left_to_right(head);

            cout << "R -> ";
            print_right_to_left(head);
        }
    }

    return 0;
}