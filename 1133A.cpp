#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{
    int h1,h2,m1,m2;
    char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    int min1=h1*60+m1;
    int min2=h2*60+m2;
    int mid=(min1+min2)/2;
    int hrs=mid/60;
    int mint=mid%60;
    if(hrs>9&&mint>9){
        cout<<hrs<<":"<<mint<<endl;
    }
    else{
        if(hrs<10){
            cout<<0;
        }
        cout<<hrs<<":";
        if(mint<10){
            cout<<0;
        }
        cout<<mint<<endl;
    }
    return 0;
}