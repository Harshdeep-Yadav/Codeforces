#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        int ans=1;
        int c=2;
        while(c<n){
            c+=x;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
