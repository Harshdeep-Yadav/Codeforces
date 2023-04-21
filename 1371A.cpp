#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        int n;
        cin >> n;
        cnt = n / 2;
        if (n % 2 == 1)
            cnt++;
        cout << cnt << endl;
    }
    return 0;
}