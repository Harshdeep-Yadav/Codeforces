#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;

    if (m == 1)
    {
        ll res = (n * (n - 1)) / 2;
        cout << res << " " << res << endl;
        return 0;
    }
    ll maxi = ((n - m + 1) * (n - m)) / 2;
    ll x = n / m;
    ll y = n % m;

    ll res1 = (x * (x - 1)) / 2;
    ll res2 = ((x + 1) * (x)) / 2;
    ll res3 = (res1 * (m - y)) + (res2 * (y));

    cout << res3 << " " << maxi << endl;
    return 0;
}