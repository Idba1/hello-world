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

int get_depth(Node *&root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left_depth = get_depth(root->left);
    int right_depth = get_depth(root->right);

    if (left_depth > right_depth)
    {
        return left_depth + 1;
    }
    else
    {
        return right_depth + 1;
    }
}

int count_nodes(Node *&root)
{
    int count = 0;
    if (root == NULL)
    {
        return count;
    }

    count = count + 1;
    count = count + count_nodes(root->left);
    count = count + count_nodes(root->right);

    return count;
}

bool perfect_binary_tree(Node *&root)
{
    if (root == NULL)
    {
        return true;
    }

    int depth = get_depth(root) - 1;
    int total_nodes = count_nodes(root);
    int expected_nodes = pow(2, depth + 1) - 1;

    if (total_nodes == expected_nodes)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = input_tree();

    if (perfect_binary_tree(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}