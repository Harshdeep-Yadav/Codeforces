#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll maxi=INT_MAX;
    ll n,m,a;
    cin>>n>>m>>a;
    n=n/a+(n%2==0);
    m=m/2+(m%2==0);
    cout<<n*m<<endl;
    return 0;
}