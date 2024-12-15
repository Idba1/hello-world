#include <bits/stdc++.h>
using namespace std;

// void fun(int *p)
// {
//     p = NULL;
// };

void fun(int *&p)
{
    p = NULL;
};

int main()
{
    int x = 60;
    int *p = &x;
    fun(p);
    // cout << "in main " << *p << endl;
    cout << "in main " << p << endl;
    return 0;
}