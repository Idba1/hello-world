#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    int marks;
    Student(string name, int id, int marks)
    {
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks > r.marks)
            return true;
        else if (l.marks < r.marks)
            return false;
        else
        {
            return l.id > r.id;
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int id, marks;
        cin >> name >> id >> marks;
        Student obj(name, id, marks);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().id << " " << pq.top().marks << " " << endl;
        pq.pop();
    }

    return 0;
}