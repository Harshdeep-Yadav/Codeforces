#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    string a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        cin >> b;
        mp[a] = b;
    }
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        string y;
        y = mp[x];
        if (y.size() < x.size())
        {
            cout << y << " ";
        }
        else
        {
            cout << x << " ";
        }
    }
    return 0;
}