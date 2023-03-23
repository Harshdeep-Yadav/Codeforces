#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string x,y;
    cin>>x>>y;
    
    for(int i=0;i<x.size();i++){
       cout<<((x[i]^y[i]));
    }
    cout<<endl;
    return 0;
}