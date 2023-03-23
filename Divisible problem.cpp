#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    int cnt=0;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        int div=0;
        int pls=0;
        if(a%b==0){
            cout<<0<<endl;
            continue;
        }
       div=a/b;
        pls=(div+1)*b;
        cout<<pls-a<<endl;
    }
    return 0;
}