#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> &a, pair<string, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    for (int j = 0; j < n; j++)
    {
        string s;
        int i;
        cin >> s >> i;
        v.push_back({s, i});
    }

    sort(v.begin(), v.end(), compare);

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j].first << " " << v[j].second << endl;
    }

    return 0;
}