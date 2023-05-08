#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    int flag; // true
    pair<int, int> a[1000];

    while (cin >> s >> n)
    {
        flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (s <= a[i].first)
            {
                flag = 0;
                break;
            }
            else
            {
                s += a[i].second;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" <<'\n';
        }
    }

    return 0;
}
