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
Student *fun()
{
    Student rifa(1017, 4.37);
    Student *p = &rifa;
    return p;
}

int main()
{
    Student *p = fun();
    cout << p->id << " " << p->gpa;
    return 0;
}