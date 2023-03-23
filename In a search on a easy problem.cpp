#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int zc=0;
    int oc=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zc++;
        }else{
            oc++;
        }
    }
    if(oc>=1){
        cout<<"Hard"<<endl;
    }
    else{
        cout<<"Easy"<<endl;
    }
    return 0;
}