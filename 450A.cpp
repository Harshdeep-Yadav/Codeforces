#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l;
    double t, max = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            l = i;
            max = ceil(t / m);
        }
    }

    cout << l << endl;
    return 0;
}
