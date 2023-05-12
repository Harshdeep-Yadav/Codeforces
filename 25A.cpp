#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int evcnt = 0;
    int evn = 0, odd = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 0)
        {
            evcnt++;
            evn = i;
        }
        else
        {
            evcnt--;
            odd = i;
        }
    }
    cout << (evcnt > 0 ? odd : evn) << endl;
}