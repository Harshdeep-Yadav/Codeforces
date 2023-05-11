#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n;
    cin >> n;
    int arr[n];
    vector<int> math, prog, pe;
    for (int i = 1; i <= n; i++)
    {

        cin >> arr[i];
        if (arr[i] == 1)
        {
            prog.pb(i);
        }
        else if (arr[i] == 2)
        {
            math.pb(i);
        }
        else if (arr[i] == 3)
        {
            pe.pb(i);
        }
    }
    int res = min(math.size(), min(pe.size(), prog.size()));
    cout << res << endl;
    for (int i = 0; i < res; i++)
    {
        cout << math[i] << " " << prog[i] << " " << pe[i] << endl;
    }
    return 0;
}