
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     cin.ignore();

//     for (int i = 0; i < t; i++)
//     {
//         string s, x;
//         getline(cin, s);
//         getline(cin, x);

//         int pos = 0;
//         int lenS = s.length();
//         int lenX = x.length();

//         for (pos = 0; pos <= lenS - lenX; pos++)
//         {
//             if (s.substr(pos, lenX) == x)
//             {
//                 s.replace(pos, lenX, "#");
//                 pos = pos + lenX - 1;
//             }
//         }

//         cout << s << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     cin.ignore();

//     while (t--) {
//         string s, x;
//         getline(cin, s);
//         getline(cin, x);

//         size_t pos = 0;
//         while ((pos = s.find(x, pos)) != string::npos) {
//             s.replace(pos, x.length(), "#");
//             pos += 1;
//         }

//         cout << s << endl;
//     }

//     return 0;
// }
