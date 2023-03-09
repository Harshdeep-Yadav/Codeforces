#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int X=0;
    string s;
    while(n--){
        cin>>s;
        if(s=="++X"||s=="X++" ){
            X++;
        }
        else{
            X--;
        }
    }
    cout<<X<<endl;
    return 0;
}