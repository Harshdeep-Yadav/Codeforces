#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v,v+n);
    int cnt = 0;
    int q;
    cin >> q;
    int m;
    while (q--)
    {
        cin >> m;
        cnt = upper_bound(v, v + n, m) - v;
        cout<<cnt<<endl;
    }
    return 0;
}