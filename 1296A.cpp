#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    cin >> n;

    int arr[n];
    while (t--)
    {
             sum = 0;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            if (arr[i] % 2 != 0 || arr[i] == 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum += arr[i];
        }
        if (sum % 2 != 0 || sum == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (odd != 0 && even != 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}