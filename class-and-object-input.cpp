#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    float gpa;
};
int main()
{
    Student idba,rifa;
    cin >> idba.name >> idba.id >> idba.gpa;
    cin >> rifa.name >> rifa.id >> rifa.gpa;

    cout << idba.name << " " << idba.id << " " << idba.gpa << endl;
    cout << rifa.name << " " << rifa.id << " " << rifa.gpa << endl;
    return 0;
}