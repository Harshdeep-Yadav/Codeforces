#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int even = 0;
    int odd = 0;
    int good = 0;
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] % 2 == 0)
            {
                good++;
            }
            else
            {
                even++;
            }
        }
        else
        {
            if (arr[i] % 2 == 1)
            {
                good++;
            }
            else
            {
                odd++;
            }
        }
    }
    if (good == n)
    {
        cout << 0 << endl;
    }
    else if (odd == even)
    {
        cout << even << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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