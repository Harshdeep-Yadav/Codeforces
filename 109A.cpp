#include <bits/stdc++.h>
#define ll long long 
using namespace std;
#define pb push_back
int main(){
    ll n;
    cin>>n;
    string s="";
    while(n>0 &&n%7!=0) n-=4,s.pb('4');
    while(n>0 &&n%7==0) n-=7,s.pb('7');
    if(n==0) {
        cout<<s<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}
