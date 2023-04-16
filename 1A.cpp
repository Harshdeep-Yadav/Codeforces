#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll maxi=INT_MAX;
    ll n,m,a;
    cin>>n>>m>>a;
    n=n/a+(n%a!=0);
    m=m/a+(m%a!=0);
    cout<<n*m<<endl;
    return 0;
}