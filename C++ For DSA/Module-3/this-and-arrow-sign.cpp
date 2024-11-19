#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    float gpa;
    Student(char name[100], int id, float gpa)
    {
        strcpy(this->name , name);
        this->id = id;
        this->gpa = gpa;
    }
};
int main()
{
    char rifaName[] = "Rifa Tasniya";
    Student rifa(rifaName, 2323, 232);
    cout << rifa.name << " " << rifa.id << " " << rifa.gpa;
    return 0;
}