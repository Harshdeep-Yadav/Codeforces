#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<vector<int>> colors(n, vector<int>(a[n - 1], 0));

    for (int i = 0; i < n; i++)
    {
        int color = 0;
        for (int j = 1; j < k; j++)
        {
            if (colors[j].size() < colors[color].size())
            {
                color = j;
            }
        }

        if (colors[color].size() < a[i])
        {
            cout << "NO" << endl;
            return 0;
        }

        for (int j = 0; j < a[i]; j++)
        {
            colors[color][j]++;
            color = (color + 1) % k;
        }
    }

    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i]; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
