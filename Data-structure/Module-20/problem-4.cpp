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

void print_level_nodes(Node *&root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);
    int current_level = 0;

    while (!q.empty())
    {
        int nodes_at_current_level = q.size();
        vector<int> level_values;

        while (nodes_at_current_level--)
        {
            Node *node = q.front();
            q.pop();

            if (node->left)
            {
                q.push(node->left);
            }

            if (node->right)
            {
                q.push(node->right);
            }

            level_values.push_back(node->value);
        }

        if (current_level == level)
        {
            for (size_t i = 0; i < level_values.size(); ++i)
            {
                if (i != 0)
                {
                    cout << " ";
                }
                cout << level_values[i];
            }
            cout << endl;
            return;
        }

        current_level++;
    }

    cout << "Invalid" << endl;
}

int main()
{
    Node *root = input_tree();
    int level;
    cin >> level;

    print_level_nodes(root, level);

    return 0;
}