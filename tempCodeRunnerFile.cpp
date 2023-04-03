#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c,f,s;
    while(t--){
        f=-1,s=-1;
        cin>>a>>b>>c;
        if(a<c){
            f=1;
        }
        if(a*b>c){
            s=b;
        }
        cout<<f<<" "<<s<<endl;
    }
    return 0;
}