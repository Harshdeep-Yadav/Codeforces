#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    // int p;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i > a && i>b)
    //     {
    //         p = i;
    //         break;
    //     }
    // }
    cout << min(n-a,b+1) << endl;
}