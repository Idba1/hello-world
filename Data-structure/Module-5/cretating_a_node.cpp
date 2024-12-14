#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b, c;
    a.value = 10;
    b.value = 54;
    c.value = 90;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.value << endl;
    cout << (*a.next).value << endl;
    cout << (*a.next).next->value << endl;

    // cout << (*b.next).value << endl;
    return 0;
}