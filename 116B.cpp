#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char c[12][13];

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {

            cin >> c[i][j];
        }
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (c[i][j] == 'W')
            {
                if (c[i - 1][j] == 'P' || c[i + 1][j] == 'P' || c[i][j - 1] == 'P' || c[i][j + 1] == 'P')
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}