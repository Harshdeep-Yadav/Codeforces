#include <bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{   
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(a[i]);
        b[i] = s.size();
    }

    int l;

    for (int i = 0; i < m; i++)
    {
        cin >> l;
        l--;
        cout << b[l] << endl;
    }
    return 0;
}
