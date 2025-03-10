#include <bits/stdc++.h>
using namespace std;

bool makeIt(int n)
{
    queue<int> q;
    unordered_set<int> visited;

    q.push(1);
    visited.insert(1);

    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        if (curr == n)
            return true;

        if (curr + 3 <= n && visited.find(curr + 3) == visited.end())
        {
            q.push(curr + 3);
            visited.insert(curr + 3);
        }
        if (curr * 2 <= n && visited.find(curr * 2) == visited.end())
        {
            q.push(curr * 2);
            visited.insert(curr * 2);
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (makeIt(n) ? "YES" : "NO") << endl;
    }
    return 0;
}