#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > v[i+1])
        {
            x = i;
            cnt++;
        }
    }
    if (v[n - 1] > v[0])
    {
        x = n - 1;
        cnt++;
    }

    if(cnt==0){
        cout<<0<<endl;
    }
    else if(cnt>1){
        cout<<-1<<endl;
    }
    else{
        cout<<1<<endl;
    }
}