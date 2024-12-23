#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> lst(10, 3);
    // list<int> lst2(lst);
    // int arr[] = {1, 2, 3, 4, 5};
    vector<int> v = {22, 33, 45, 76};
    list<int> lst2(v.begin(), v.end());

    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << endl;
    }

    for (int value : lst2)
    {
        cout << value << endl;
    }

    return 0;
}