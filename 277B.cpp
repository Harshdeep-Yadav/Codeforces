#include <bits/stdc++.h>
using namespace std;
const int N = int(1e5 + 3);

int n, m, a[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        a[num] = i + 1;
    }
    cin >> m;

    int cnt_v = 0;
    int cnt_p = 0;

    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        cnt_v += a[q];
        cnt_p += n - a[q] + 1;
    }
    cout << cnt_p << " " << cnt_v << endl;
}