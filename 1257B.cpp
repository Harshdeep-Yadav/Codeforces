#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x==1 && y>1){
            cout<<"No"<<endl;
        }
        else{
            if(x<=3 && y>3){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}