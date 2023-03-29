#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=k*l;
    int y=x/n;
    int z=c*d;
    int s=p/np;
    cout<<min(y,min(z,s))/3<<endl;
    return 0;
}

// 5 100 10 1 19 90 4 3
