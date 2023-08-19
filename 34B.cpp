#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < m; i++)
    {
        if (a[i] < 0)
        {
            sum += abs(a[i]);
        }
    }
    cout << sum << endl;
}

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int>> utt(n + 1, vector<int>(4, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                if (j == nums[i])
                {
                    utt[i + 1][j] = 1 + utt[i][j];
                }
                else
                {
                    utt[i + 1][j] = utt[i][j];
                }
            }
        }
        int tt = n;
        for (int i = 0; i <= n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                for (int k = j; k <= n; k++)
                {
                    int ek = utt[i][1];
                    int doo = utt[j][2] - utt[i][2];
                    int teen = utt[k][3] - utt[j][3];
                    tt = min(tt, n - ek - doo - teen);
                }
            }
        }
        return tt;
    }
};