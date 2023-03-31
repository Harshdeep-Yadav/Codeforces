#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    for(int i = 0; i <n; i++)
        for(int j = 0; j <m; j++){
            cin >> arr[i][j];
        }
    int cnt = 0; // it will be going to count the number of R and D in last Column and Row.
    for (int i = 0; i < n-1; i++) // for each column 
    {
        for (int j = m - 1; j <m; j++)
        {
            if (arr[i][j] == 'R')
            {
                cnt++;
                arr[i][j] = 'D';
            }
        }
    }

    for (int i = n - 1; i <n; i++) // for each row
    {
        for (int j = 0; j < m-1; j++)
        {
            if (arr[i][j] == 'D')
            {
                cnt++;
                arr[i][j] = 'R';
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}