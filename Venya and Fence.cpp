#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int  h;
    cin>>h;
    int cnt=0; // return ans
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    
    for(int i=0;i<n;i++){
       if(num[i]<=h){
           cnt=cnt+1;
        
       }
       else if(num[i]>h){
           cnt=cnt+2;
       }
    }
      cout<<cnt;  
    return 0;
}