#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int Cnt=0,cnt=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            Cnt++;
        }
        else{
            cnt++;
        }
    }
    cout<<Cnt;
    cout<<cnt;
    if(Cnt>cnt){
       char ch;
       for(int i =0;i<s.size();i++){
        ch=toupper(s[i]);
        cout<<ch;
       }
    }else{
        char ch;
        for(int i =0;i<s.size();i++){
        ch=tolower(s[i]);
        cout<<ch;
       }
    }
    return 0;
}