#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            cout<<"Yes"<<endl;
            cout<<s[i]<<s[i+1]<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}