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
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mn = min(arr[i].marks, mn);
    }
    cout << mn << endl;
    return 0;
}