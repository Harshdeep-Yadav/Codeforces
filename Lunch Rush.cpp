#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int maje;
    int maxi;
    int f,t;
    cin>>f>>t;
    if(t>k){
        maxi=f-(t-k);
    }else{
        maxi=f;
    }
    while(--n){
        // int f,t;
        cin>>f>>t;
        if(t>k){
            maje=f-(t-k);
            
        }else{
            maje=f;
        }
        if(maje>maxi){
            maxi=maje;
        }
    }
    cout<<maxi<<endl;
    return 0;
}

