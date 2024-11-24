#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mathMark;
    int englishMark;
    Student(string name, int roll, int mathMark, int englishMark)
    {
        this->name = name;
        this->roll = roll;
        this->englishMark = englishMark;
        this->mathMark = mathMark;
    }
    void totalMarks()
    {
        cout << "total mark: " << englishMark + mathMark << endl;
    }
    void hello()
    {
        cout << "hello from" << " " << name << endl;
    }
};
int main()
{
    Student idba("Idba", 20, 70, 20);
    idba.totalMarks();
    idba.hello();
    Student monira("monira", 20, 80, 20);
    monira.hello();
    monira.totalMarks();
    cout << monira.roll << endl;
    return 0;
}