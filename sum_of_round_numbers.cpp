#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;  // 10000
        int arr[6];
        int dig=0;
        int m=1;
        for(int i=1;i<6;i++) {
            arr[i]=n%10;
            n/=10;
            if(arr[i]!=0){
                dig++;
            }
        }
        cout<<dig<<'\n';; 
        for(int i=1;i<6;i++) {
                if(arr[i]!=0){
                    cout<<arr[i]*m<<" ";
                }
                m*=10;  
        }
        cout<<endl;
    }

    return 0;
    }

