#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t;
    int pre = 0;
    int mini_time = INT_MAX;
    int mini_index = 0;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (t < mini_time)
        {
            mini_time = t;
            mini_index = i;
            cnt = 1;
        }
        else if (t == mini_time)
        {
            cnt++;
        }
    }
    if (cnt == 1)
    {
        cout << mini_index << endl;
    }
    else
    {
        cout << "Still Rozdil" << endl;
    }
    return 0;
}