#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        vector<int>v(3);
        for(auto &it:v){
            cin>>it;
        }
        sort(v.begin(),v.end());
        if(v[1]!=v[2]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
        }
    }
    return 0;
}
