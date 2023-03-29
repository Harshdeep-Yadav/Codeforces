#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    int brst=arr[0];
    int worst=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<worst){
            worst=arr[i];
            cnt++;
        }
        if(arr[i]>brst){
            brst=arr[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}