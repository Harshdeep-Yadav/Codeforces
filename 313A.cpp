#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        if(n<0){
            int a=n/10;
            // cout<<a<<endl;
            int b=(n/100*10+n%10);
            // cout<<b<<endl;
            cout<<max(a,b)<<endl;
        }
    }
    return 0;
}
