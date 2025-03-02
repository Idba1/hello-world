#include <bits/stdc++.h>
using namespace std;

void rec(int n)
{
    if (n > 5)
        return;
    cout << n << " ";
    rec(n + 1);
}

int rec2(int n)
{
    if (n > 5)
        return 0;
    int sum = rec2(n + 1);
    return sum + n;
}

int main()
{
    rec(1);
    cout << endl;
    cout << rec2(1) << endl;
    return 0;
}