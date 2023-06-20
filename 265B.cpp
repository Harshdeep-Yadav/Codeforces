#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int t=n+n-1;
    int x,h=0;
    while(n--){
        cin>>x;
        t+=abs(x-h);
        h=x;
    }
    cout<<t<<endl;
}