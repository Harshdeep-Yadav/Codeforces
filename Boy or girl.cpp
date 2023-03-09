#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int cnt=0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]!=s[i-1])
            cnt++;
    }
//    cout<<s<<endl;
//    cout<<ans<<endl;
    if(cnt&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}