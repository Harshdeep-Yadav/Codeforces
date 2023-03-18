#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>>n;
    int a,b;
    int minSeat=0;
    int tram=0;
    
    while(n--){
        cin>>a>>b;
        tram=tram-a;
        tram=tram+b;
        if(tram>minSeat){
            minSeat=tram;
        }
    }
    cout<<minSeat;

    return 0;
}

