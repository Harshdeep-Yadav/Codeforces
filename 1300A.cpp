#include<bits/stdc++.h>
#define ll              long long
#define pb              push_back
using namespace std;
int main()
{
 
    ll t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        ll idx = n;
        n = n * 2;
 
        vector<ll>v;
        for(ll i=0; i<n; i++){
            cin>>a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
 
        ll ans = 0;
        ans = abs(v[idx-1]- v[idx]);
 
        cout<<ans<<endl;
    }
 
    return 0;
}
