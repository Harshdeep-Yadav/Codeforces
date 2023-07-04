#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int four = 0, seven = 0, fouty7 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '4')
        {
            four++;
        }
        else if (s[i] == '7')
        {
            seven++;
        }
        else if (s[i] == '4' && s[i + 1] == '7' && i + 1 < n)
        {
            fouty7++;
        }
    }

    if (four == 0 && seven == 0 & fouty7 == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        int res = 0;
        res = max(four, max(seven, fouty7));
        if (res == four)
        {
            cout << 4 << endl;
        }
        else if (res == seven)
        {
            cout << 7 << endl;
        }
        else if (four == seven)
        {
            cout << 4 << endl;
        }
        else
        {
            cout << 47 << endl;
        }
    }
    return 0;
}