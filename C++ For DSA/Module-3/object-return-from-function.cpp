#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    float gpa;
    Student(int id, float gpa)
    {
        this->id = id;
        this->gpa = gpa;
    }
};
Student fun()
{
    Student rifa(23023, 232);
    return rifa;
}

int main()
{
    Student rifa = fun();
    cout << rifa.id << " " << rifa.gpa;
    return 0;
}