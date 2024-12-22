#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list(10, 3);
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}