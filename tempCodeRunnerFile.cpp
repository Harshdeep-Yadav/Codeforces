#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    int clone=max(0,(n*y)/100-x);
    if(clone<0){
        cout<<0<<endl;
    }
    else{
        cout<<clone<<endl;
    }
}