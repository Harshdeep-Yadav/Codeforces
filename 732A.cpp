#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int cnt=1;
    int val=k;
    int i=2;

    while(true){
        if(val%10==0){
            cout<<cnt<<endl;
            break;
        }
        if(val%10==r){
            cout<<cnt<<endl;
            break;
        }
        val=k*i;
        cnt++;
        i++;
    }
    return 0;
}
