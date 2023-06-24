#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int cnt = 0;

    if (arr[0] == 1 || arr[m - 1] == n)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < m - 2; i++)
    {
        if (arr[i] + 1 == arr[i + 1] && arr[i + 1] + 1 == arr[i + 2])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}