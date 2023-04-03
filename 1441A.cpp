#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res=0;
    int n,m;
    cin>>n>>m;
    if(n==m){
        cout<<0<<endl;
        return 0;
    }
    else if(m%n!=0){
        cout<<-1<<endl;
        return 0;
    }
    else{
        int d=m/n;
        while(d%2==0){
            d/=2;
            res++;
        }
        while(d%3==0){
            d/=3;
            res++;
        }
        if(d!=1){
            res=-1;
        }
        cout<<res<<endl;
    }

    return 0;
}