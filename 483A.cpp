#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  l, r;
    cin >> l >> r;
    long long  range = r - (l - 1);
    if (range < 3 || l % 2 == 1 && range < 4)
    {
        cout << -1 << endl;
    }
    else
    {
        if (l % 2 == 0)
        {
            cout << l << " " << l + 1 << " " << l + 2 << endl;
        }
        else
        {
            cout << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        }
    }
    return 0;
}