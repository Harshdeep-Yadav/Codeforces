#include<bits/stdc++.h>
using namespace std;


int solve(){
    int k;
    string s;
    cin>>k>>s;
    unordered_map<char,int>mp;

    for(auto it:s){
        mp[it]++;
    }
    
    string res="";
    for(auto it:mp){
        if(it.second%k){
            cout<<-1<<endl;
            return 0;
        }else{
            res+=string(it.second/k,it.first); // string(2/2,a);  adding that character to answer string according to frequency
        }
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<k;i++){
        cout<<res;
    }
    cout<<endl;
    return 0;
}
int main(){
    int t=1;
    while(t--){
        solve();
    }
}