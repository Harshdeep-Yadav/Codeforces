#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n, m, k;
    cin >> n >> m >> k;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long mx = *max_element(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (mx == arr[i])
        {
            arr[i] = -1;
            break;
        }
    }
    long long mx2 = *max_element(arr, arr + n);
    // cout<<mx<<" "<<mx2<<endl;
    long long sm = mx * k + mx2;
    long long y = int(m / (k + 1));
    sm = y * sm;
    // cout<<sm<<" "<<y<<endl;
    sm = sm + (m - y * (k + 1)) * mx;
    cout << sm;
    return 0;
}