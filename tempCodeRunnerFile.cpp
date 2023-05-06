#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int flag=1;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U'&& s[i+2]=='B'){
                i+=2;
                if(!flag)
                cout<<" ";
        }
        else{
            flag=0;
            cout<<s[i];
        }
    }
}


class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        int n =d.size();
        set<int>st;
        for(int i=0;i<n;i++){
             if(d[i]==0) continue;
            for(int j=0;j<n;j++){
              for(int k=0;k<n;k++){
                if(i!=j&&j!=k&&k!=i && (d[i]*100+d[j]*10+d[k])%2==0){
                    st.insert(d[i]*100+d[j]*10+d[k]);
                }
             }
          }
        }
        vector<int>utt;
        
        for(auto it : st){
            utt.push_back(it);
        }
        return utt;
    }
};