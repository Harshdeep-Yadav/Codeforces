#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pp pair<int, int>
int main()
{

    ll i, j;
    ll n, x;
    ll s, e, count = 0;

    cin >> n >> x;
    pp a[n];

    for (i = 0; i < n; i++)
    {
        cin >> s >> e;
        a[i] = make_pair(s, e);
    }


    ll ag = 1;
    for (i = 0; i < n; i++)
    {
        while (ag + x <= a[i].first)
            ag += x;

        count += a[i].second - ag + 1;
        ag = a[i].second + 1;
    }

    cout << count;

    return 0;
}