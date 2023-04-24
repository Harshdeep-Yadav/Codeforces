#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;

void solve(){
    ll x,y,n;
    cin>>x>>y>>n;
    ll q=n/x;
    ll rem=n%x;

    if(rem>=y){
        cout<<q*x+y<<endl;
    }
    else{
        cout<<(q-1)*x+y<<endl;
    }
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();   
    }
    return 0;
}
