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
    int ind1 = 0, ind2 = n - 1;
    int diff = abs(arr[0] - arr[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        int ab = abs(arr[i] - arr[i+ 1]);
        if (ab < diff)
        {
            ind1 = i;
            ind2 = i + 1;
            diff = ab;
        }
    }
    cout << ind1+1 << " " << ind2 +1<< endl;
    return 0;
}