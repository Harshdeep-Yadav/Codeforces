#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }

    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;

    pair<int, int> arr[n];

    int sum = 0, cnt = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr, arr + n, comp);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i].first << arr[i].second << endl;
    // }

    int i=0;
    while (cnt > 0 && i < n)
    {   
        cnt--;
        sum += arr[i].first;
        cnt += arr[i].second;
        i++;
    }
    cout << sum << endl;
    return 0;
}