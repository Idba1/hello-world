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
    Student idba, rifa, anisha;
    cin >> idba.name >> idba.id >> idba.gpa;
    cin >> rifa.name >> rifa.id >> rifa.gpa;

    cin.ignore(); //ignore new line before getline
    cin.getline(anisha.name, 100); // for space in name
    cin >> anisha.id >> anisha.gpa;

    cout << idba.name << " " << idba.id << " " << idba.gpa << endl;
    cout << rifa.name << " " << rifa.id << " " << rifa.gpa << endl;
    cout << anisha.name << " " << anisha.id << " " << anisha.gpa << endl;
    return 0;
}