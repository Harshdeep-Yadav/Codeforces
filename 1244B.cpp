#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s; 
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        cout<<n+cnt<<endl;
    }
    return 0;
}
