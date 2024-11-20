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

int main()
{
    Student *name = new Student(4, 43.5); // dynamic object
    cout << name->id << " " << name->gpa << endl;
    Student rahi(2, 3.23);
    cout << rahi.id << " " << rahi.gpa << endl;
    return 0;
}