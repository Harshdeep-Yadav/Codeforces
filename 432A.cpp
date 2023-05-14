#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p;
    cin >> n >> k;
    int teamCnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p + k <= 5)
        {
            teamCnt++;
        }
    }
    cout<<teamCnt/3<<endl;
    return 0;
}