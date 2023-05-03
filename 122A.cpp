#include <bits/stdc++.h>
#define ll long long 
using namespace std;
#define pb push_back

int main(){
    int n;
    cin >> n;
    int x=n/7;
    int y=n/4;
    if(x%2==0 || y%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
