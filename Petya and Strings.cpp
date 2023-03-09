#include<bits/stdc++.h>
using namespace std;

int main()
{
    string f,s;
    cin>>f>>s;
    for(int i=0;i<f.size();i++){
        if(f[i]<92){
            f[i]+=32;
        }
       if(s[i]<92){
            s[i]+=32;
        }
    }
    if(f<s){
        cout<<-1;
    }
    if(s<f){
        cout<<1;
    }
      if(f==s){
        cout<<0;
      }  
    
    return 0;
};