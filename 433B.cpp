#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> v;
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    vector<long long> sum1(n + 1, 0), sum2(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        sum1[i] = sum1[i - 1] + v[i - 1];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        sum2[i] = sum2[i - 1] + v[i - 1];
    }
    int type, l, r;
    int m;
    cin >> m;
    while (m--)
    {
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << sum1[r] - sum1[l - 1] << endl;
        }
        else
        {
            cout << sum2[r] - sum2[l - 1] << endl;
        }
    }

    return 0;
}