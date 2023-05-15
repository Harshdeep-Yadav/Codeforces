#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int z = 0, f = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 0)
        {
            z++;
        }
        else
        {
            f++;
        }
    }
    if (z == 0)
    {
        cout << -1 << endl;
    }
    else if (f < 9)
    {
        cout << 0 << endl;
    }
    else
    {
        f = f - (f % 9);

        for (int i = 0; i < f; i++)
        {
            cout << 5;
        }
        for (int i = 0; i < z; i++)
        {
            cout << 0;
        }
    }
    return 0;
}