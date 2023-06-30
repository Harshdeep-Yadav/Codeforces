#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n <= 2)
    {
        cout << n;
        return 0;
    }
    int mini = INT_MIN;

    int i = 0;
    int x = 2;
    while (i <= n - 2)
    {
        if (v[i] + v[i + 1] == v[i + 2])
        {
            x++;
            i++;
        }
        else
        {
            mini = max(mini, x);
            x = 2;
            i++;
        }
    }

    mini = max(mini, x);
    cout << mini << endl;
    return 0;
}