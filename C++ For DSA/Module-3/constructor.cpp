#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    float gpa;
    Student(char n[100], int i, float g)
    {
        strcpy(name, n);
        id = i;
        gpa = g;
    }
};
int main()
{
    char Idba[] = "Idba Islam";
    Student idba(Idba, 2323, 232);
    cout << idba.name << " " << idba.id << " " << idba.gpa;
    return 0;
}