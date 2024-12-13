#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        if (flag == 0)
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}