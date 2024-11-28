#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    transform(S.begin(), S.end(), S.begin(), ::tolower);
    // cout << S << endl;

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'e')
            e++;
        if (S[i] == 'g')
            g++;
        if (S[i] == 'y')
            y++;
        if (S[i] == 'p')
            p++;
        if (S[i] == 't')
            t++;
    }
    // cout << e << " " << g << " " << y << " " << p << " " << t << endl;
    
    int result = min({e, g, y, p, t});

    cout << result << endl;

    return 0;
}