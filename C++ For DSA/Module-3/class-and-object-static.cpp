#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    int gpa;
};
int main()
{
    Student idba;
    idba.id = 1017;
    idba.gpa = 2.78;
    char temp[100] = "Idba Islam";
    strcpy(idba.name, temp);

    cout << idba.name << " " << idba.id << " " << idba.gpa << endl;
    return 0;
}