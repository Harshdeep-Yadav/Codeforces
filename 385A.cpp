#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int maxi = 0;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        maxi = max(maxi, a[i] - a[i + 1] - c);
    }
    cout << maxi;
}