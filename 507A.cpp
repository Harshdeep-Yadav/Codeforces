#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{

    int n, k, x;
    vector<pair<int, int>> v;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        v.pb({x, i});
    }
    sort(begin(v), end(v));
    int cnt = 0;
    int remDays = 0;
    
    for(auto it: v){
        remDays+=it.first;

        if(remDays>k){
            break;
        }
        cnt++;
    }

    cout << cnt << endl;
    for (int i=0;i<cnt;i++)
    {
        cout << v[i].second << " ";
    }
    return 0;
}
