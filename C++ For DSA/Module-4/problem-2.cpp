// #include <bits/stdc++.h>
// using namespace std;

// void sort_it(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n, greater<int>());
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     sort_it(arr, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    return arr;
}

int main()
{
    int n;
    cin >> n;
    int *sorted_arr = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << sorted_arr[i] << " ";
    }
    cout << endl;
    return 0;
}