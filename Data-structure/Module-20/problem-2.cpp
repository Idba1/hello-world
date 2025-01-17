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

void get_leaf_nodes(Node *&root, vector<int> &leaf_nodes)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        leaf_nodes.push_back(root->value);
    }

    get_leaf_nodes(root->left, leaf_nodes);
    get_leaf_nodes(root->right, leaf_nodes);
}

void print_leaf_nodes_descending(Node *&root)
{
    vector<int> leaf_nodes;
    get_leaf_nodes(root, leaf_nodes);

    sort(leaf_nodes.begin(), leaf_nodes.end());
    reverse(leaf_nodes.begin(), leaf_nodes.end());

    for (int i = 0; i < leaf_nodes.size(); ++i)
    {
        cout << leaf_nodes[i] << " ";
    }
    cout << endl;
}

int main()
{
    Node *root = input_tree();
    print_leaf_nodes_descending(root);
    return 0;
}