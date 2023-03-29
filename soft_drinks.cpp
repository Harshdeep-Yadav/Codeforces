#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return 0;
}

// 5 100 10 1 19 90 4 3