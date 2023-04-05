#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    int a;
    vector<ll>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    ll need=v[n-1];
    ll sum=0;
    for(ll i=n-1;i>=0;i--){
        if(v[i]>=need)
            {
                sum+=need;
                need--;  
            }
        else if(need>v[i]){
            sum+=v[i];
            need=v[i]-1;
        }
        if(need==0){
                break;
        }
    }
    cout<<sum<<endl;
    return 0;
}