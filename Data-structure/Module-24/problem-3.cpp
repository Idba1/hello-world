#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        string most_frequent_word;
        int max_count = 0;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > max_count)
            {
                max_count = mp[word];
                most_frequent_word = word;
            }
        }

        cout << most_frequent_word << " " << max_count << endl;
    }

    return 0;
}