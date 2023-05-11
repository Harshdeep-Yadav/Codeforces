#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

bool isValid(int d, int m, int y)
{
    if (y < 0 || y > 9999 || m < 1 || m > 12 || d < 1 || d > 31)
    {
        return false;
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) // 30 wala mahina
    {
        return (d <= 30);
    }
    if (m == 2)
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) // leap year
        {
            return (d <= 29);
        }
        else
        {
            return (d <= 28);
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int d = stoi(s.substr(0, 2));
        int m = stoi(s.substr(3, 2));
        int y = stoi(s.substr(6, 4));
        bool ddmmyy = isValid(d, m, y);
        bool mmddyy = isValid(m, d, y);

        if (ddmmyy && mmddyy)
        {
            cout << "BOTH" << endl;
        }
        else if (ddmmyy)
        {
            cout << "DD/MM/YYYY" << endl;
        }
        else
        {
            cout << "MM/DD/YYYY" << endl;
        }
    }
    return 0;
}
