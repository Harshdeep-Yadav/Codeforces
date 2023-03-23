#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    int cnt=1;
    int mx=INT_MIN;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            cnt++;
        }else{
            cnt=1;
            
        }
        if(cnt>mx){
            mx=cnt;
        }
    }
    cout<<mx<<endl;
    return 0;
}