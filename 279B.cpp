#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, i, j = -1;
    cin >> n >> t;
    int arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0;
    int res = 0;
    for (i = 0; i < n; i++)
    {
        if (sum + arr[i] <= t)
            sum += arr[i];
        else
        {
            sum += arr[i];
            while (sum > t)
            {
                j++;
                sum -= arr[j];
            }
        }
        res = max(res, i - j);
    }
    cout << res << endl;
}