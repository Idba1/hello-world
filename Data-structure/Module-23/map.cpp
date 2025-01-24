#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["rifa"] = 8;
    mp["rafa"] = 10; // logN
    mp["anisha"] = 7;
    // cout << mp["rifa"] << endl;
    // cout << mp["anisha"] << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) // NlogN
    {
        cout << it->first << " " << it->second << endl; // logN
    }
    return 0;
}