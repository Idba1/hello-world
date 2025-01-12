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

void level_order(Node *root)
{
    int value;
    cin >> value;
    Node *root = new Node(value);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // step1: ber kore ana
        Node *p = q.front();
        q.pop();
        // step2: oi Node ke niye kaj kora
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

        // step3: children goloke push kora
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
}

int main()
{
    return 0;
}