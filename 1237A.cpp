#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        double k = (double)arr[i] / 2;
        if (arr[i] % 2 != 0)
        {
            if (flag == 0)
            {
                arr[i] = ceil(k);
                flag = 1;
            }
            else if (flag == 1)
            {
                arr[i] = floor(k);
                flag = 0;
            }
        }
        else
        {
            arr[i] /= 2;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}