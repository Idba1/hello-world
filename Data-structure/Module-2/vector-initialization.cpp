#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector initialization type 1
    //  vector<int> v;
    //  cout << v.size() << endl;

    // vector initialization type 2
    //  vector<int> v(100);
    //  cout << v.size() << endl;

    // vector initialization type 3
    // vector<int> v(5, 0);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    // vector initialization type 4
    // vector<int> v1(5, 1);
    // vector<int> v2(v1);
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << endl;
    // }

    // vector initialization type 5
    int arr[4] = {1, 2, 3, 4};
    vector<int> v(arr, arr + 4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}