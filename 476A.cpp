#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int cnt;
    if(m>n)
    {
        cnt=-1;
    }
    else
    {
        if(n%2==0)
        {
            cnt=n/2;
            // cout<<cnt<<endl;
        }
        else
        {
            cnt=n/2+1;
        }
        // cout<<cnt<<endl;
        while(cnt%m!=0){
            cnt++;
            // cout<<cnt<<endl;
        }
    }

    cout<<cnt<<endl;
    return 0;
}