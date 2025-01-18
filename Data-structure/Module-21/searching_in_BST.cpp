#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int value;
    cin >> value;
    Node *root;
    if (value == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(value);
    }

    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }

        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}

bool search(Node *root, int value)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->value == value)
    {
        return true;
    }
    if (root->value > value)
    {
        bool l = search(root->left, value);
        return l;
    }
    else
    {
        bool r = search(root->right, value);
        return r;
    }
}

int main()
{
    Node *root = input_tree();
    int value;
    cin >> value;
    if (search(root, value))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}