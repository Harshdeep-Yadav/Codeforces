#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e5 + 5;
int a[N], b[N], c[N];

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            a[i] = (i == 1 ? 1 : 2 * a[i - 1]);
            c[i] = a[i] * b[i];
        }
        int s = 0;
        int pv = 0;
        int pn = 0;
        int i = 0;
        while (i < n)
        {
            s += c[i];
            i++;
            if (s > 0)
            {
                pv++;
            }
            else
            {
                pn++;
            }
        }
        int j = n - 1;
        int s2 = 0;
        int pv1 = 0, pn1 = 0;
        while (j >= 0)
        {
            s2 += c[j];
            j--;
            if (s2 > 0)
            {
                pv1++;
            }
            else
            {
                pn1++;
            }
        }
        int res = abs(pv - pn) - abs(pv1 - pn1);
        cout << res << endl;
    }
    return 0;
};
