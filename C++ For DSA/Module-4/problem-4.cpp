#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int totalMark;
};

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        Student student[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> student[i].id >> student[i].name >> student[i].section >> student[i].totalMark;
        }
        Student topStudent = student[0];

        for (int i = 1; i < 3; i++)
        {
            if (student[i].totalMark > topStudent.totalMark)
            {
                topStudent = student[i];
            }
            else if (student[i].totalMark == topStudent.totalMark)
            {
                if (student[i].id < topStudent.id)
                {
                    topStudent = student[i];
                }
            }
        }
        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.totalMark << endl;
    }
    return 0;
}
