#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int mini = min(a, b);
        int maxi = max(a, b);
        int res = max(mini * 2, maxi);
        cout << res * res << endl;
    }
    return 0;
}
