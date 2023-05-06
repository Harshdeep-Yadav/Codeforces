// #include<bits/stdc++.h>
// using namespace std;

// int  main(){
//     int t;
//     cin>>t;
//     int cnt=0;
//     string s="codeforces";
//     while(t--){
//         string r;
//         cin>>r;
//         for(int i=0;i<r.size();i++){
//             if(r[i]==s[i])
//               continue;
//             else if(r[i]!=s[i]){
//                 cnt++;
//             }
//         }

//         cout<<cnt<<endl;
//     }
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s = "codeforces";
    while (t--)
    {
        string r;
        cin >> r;

        int cnt = 0;

        for (int i = 0; i < r.length(); i++)
        {
            if (s[i] != r[i])
                cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}