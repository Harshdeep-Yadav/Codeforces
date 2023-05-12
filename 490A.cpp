// #include <bits/stdc++.h>
// using namespace std;
// #define pb push_back
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     vector<int> math, prog, pe;
//     for (int i = 1; i <= n; i++)
//     {

//         cin >> arr[i];
//         if (arr[i] == 1)
//         {
//             prog.pb(i);
//         }
//         else if (arr[i] == 2)
//         {
//             math.pb(i);
//         }
//         else if (arr[i] == 3)
//         {
//             pe.pb(i);
//         }
//     }
//     int res = min(math.size(), min(pe.size(), prog.size()));
//     cout << res << endl;
//     for (int i = 0; i < res; i++)
//     {
//         cout << math[i] << " " << prog[i] << " " << pe[i] << endl;
//     }
//     return 0;
// }
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    long long y=1;
    for(int i=1;i<=t;i++)
    {
        y=y*i;
    }
    cout<<y-1<<endl;
}