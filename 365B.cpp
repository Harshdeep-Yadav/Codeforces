#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (n < 3)
    {
        return 0;
    }
    int len = 0;
    for (int i = n; i >= 0; i--)
    {
        if(v[i]==(v[i-1]+v[i-2])){
            len++;
        }
    }
    cout<<len<<endl;
    return 0;
}