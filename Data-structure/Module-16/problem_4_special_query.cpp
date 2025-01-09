#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<string> q;

    for (int i = 0; i < n; i++)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (command == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}