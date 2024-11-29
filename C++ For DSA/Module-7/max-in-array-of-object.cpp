#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i].marks, mx);
    }
    cout << mx << endl;
    return 0;
}