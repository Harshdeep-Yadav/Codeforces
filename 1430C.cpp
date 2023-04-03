#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void solve()
{
    int n;
    cin>>n;
    cout << 2 << endl;
    if (n == 2)
    {
        cout << 1 << " " << 2 << endl;
        return;
    }
    cout << n << " " << n - 2 << endl;
    cout << n - 1 << " " << n - 1 << endl;

    for (int i = n - 3; i >= 1; i--)
    {
        cout << i << " " << i + 2 << endl;
    }
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
