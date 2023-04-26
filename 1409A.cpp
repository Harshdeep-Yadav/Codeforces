
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = abs(b - a);
    ll d = x / 10;
    ll r = x % 10;
    if (r)
    {
        d++;
    }
    cout << d << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}