#include<bits/stdc++.h>
using namespace std;

int main(){
    double h,l;
    cin>>h>>l;
    double res=(l*l)-(h*h);
    res/=2*h;
    cout<< fixed<<setprecision(10) <<res<<endl;
}