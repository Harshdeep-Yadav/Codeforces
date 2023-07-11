#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, l, r, cnt = 0;

    int a[10001];
    string s;

    cin >> s >> m;

    for (int i = 1; i < s.size(); i++)
    {

        if (s[i] == s[i - 1])
            cnt++;

        a[i] = cnt;
    }

    while (m--)
    {
        cin >> l >> r;
        cout << a[r - 1] - a[l - 1] << endl;
    }
}