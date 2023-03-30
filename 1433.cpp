#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    cin >> s;
    int n = s.size();
    int r = (s[0] - '0' - 1) * 10;
    for (int i = 1; i <= n; i++)
    {
        r += i;
    }
    cout << r << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
