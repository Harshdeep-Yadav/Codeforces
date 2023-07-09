#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin >> n >> k;
        // int f=0;
        int cnt=k + floor((k - 1) / (n - 1));

        // while(f!=k){
        //     cnt++;
        //     if(cnt%n!=0){
        //         f++;
        //     }
        // }
        cout<<cnt<<endl;
    }
    return 0;
}