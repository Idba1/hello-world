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

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
};

void insert_at_pos(Node *&head, int idx, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
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

int calculate_linked_list_size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
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

    // int ctn = calculate_count(head);
    // cout << ctn;

    int idx;
    while (cin >> idx >> value)
    {
        int size = calculate_linked_list_size(head);
        if (idx > size)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (idx == size)
        {
            insert_at_tail(head, tail, value);
        }
        else if (idx == 0)
        {
            insert_at_head(head, value);
        }
        else
        {
            insert_at_pos(head, idx, value);
        }
        print_linked_list(head);
    }

    return 0;
}