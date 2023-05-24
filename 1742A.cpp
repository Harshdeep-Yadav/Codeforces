#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a + b == c || c + a == b || b + c == a) ? "YES\n" : "NO\n");
}

int main()
{
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
}