#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, h;
    cin >> s;
    for (int i = 0; i < 5; i++)
    {
        cin >> h;
        if (h[0] == s[0] || h[1] == s[1])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No";
    return 0;
}

// 2H 4C TH JH AD