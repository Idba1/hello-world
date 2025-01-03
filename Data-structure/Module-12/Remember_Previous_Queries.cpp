#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    list<int> l;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else if (x == 2)
        {
            if (v < l.size())
            {
                auto it = l.begin();
                for (int i = 0; i < v; i++)
                {
                    it++;
                }
                l.erase(it);
            }
        }

        cout << "L -> ";
        if (l.empty())
        {
            cout << endl;
        }
        else
        {
            for (auto it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }

        cout << "R -> ";
        if (l.empty())
        {
            cout << endl;
        }
        else
        {
            for (auto it = l.end(); it != l.begin();)
            {
                it--;
                cout << *it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}