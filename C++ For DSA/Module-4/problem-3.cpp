#include <bits/stdc++.h>
using namespace std;

int main()
{
    string strFirst;
    while (getline(cin, strFirst))
    {
        string strFilter = "";
        for (int i = 0; i < strFirst.length(); i++)
        {
            char c = strFirst[i];
            if (c != ' ')
            {
                strFilter += c;
            }
        }
        sort(strFilter.begin(), strFilter.end());
        cout << strFilter << endl;
    }

    return 0;
}
