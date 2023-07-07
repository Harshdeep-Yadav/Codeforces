#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int taxi = 0;
    int i = n - 1;
    int k = 0;
    sort(arr, arr + n);

    while (k != i)
    {
        if (arr[i] + arr[k] <= 4)
        {
            arr[i] += arr[k];
            k++;
        }
        else
        {
            i--;
            taxi++;
        }
    }
    cout << taxi + 1 << endl;
    return 0;
}