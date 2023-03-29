#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int a=abs(x-y);
    int b=abs(x-z);
    int c=abs(y-z);
    int mini=max(a,max(b,c));
    cout<<mini<<endl;
    return 0;
}