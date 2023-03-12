#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt =0;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            cnt++;
        }else{
            cnt=0;
        }
    }
    if(cnt>=7){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    return 0;
}