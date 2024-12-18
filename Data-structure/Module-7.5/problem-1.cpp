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

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head1, tail1, value);
    }

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head2, tail2, value);
    }

    int size1 = calculate_linked_list_size(head1);
    int size2 = calculate_linked_list_size(head2);

    if (size1 == size2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
