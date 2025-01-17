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

void print_left_boundary(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    if (node->left)
    {
        print_left_boundary(node->left);
        cout << node->value << " ";
    }
    else if (node->right)
    {
        print_left_boundary(node->right);
        cout << node->value << " ";
    }
    else
    {
        cout << node->value << " ";
    }
}

void print_right_boundary(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    if (node->right)
    {
        cout << node->value << " ";
        print_right_boundary(node->right);
    }
    else if (node->left)
    {
        cout << node->value << " ";
        print_right_boundary(node->left);
    }
    else
    {
        cout << node->value << " ";
    }
}

void print_outer_tree(Node *&root)
{
    if (root == NULL)
    {
        return;
    }

    print_left_boundary(root->left);
    cout << root->value << " ";
    print_right_boundary(root->right);
}

int main()
{
    Node *root = input_tree();
    print_outer_tree(root);
    return 0;
}