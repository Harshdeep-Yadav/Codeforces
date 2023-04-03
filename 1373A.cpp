// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long  t;
//     cin >> t;
//     long long a, b, c, f, s;
//     while (t--)
//     {

//         cin >> a >> b >> c;
//         if (a < c)
//         {
//             cout << 1 << " ";
//         }
//         else
//         {
//             cout << -1 << " ";
//         }

//         if (a * b > c)
//         {
//             cout << b;
//         }
//         else
//         {
//             cout << -1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    ll a,b,c,f,s;
    cin>>t;
    while(t--){
        f = -1,s = -1;
        cin>>a>>b>>c;

        if(a < c){
            f = 1;
        }
        if(a*b > c){
            s = b;
        }
        cout<<f<<" "<<s<<endl;
    }

    return 0;
}

