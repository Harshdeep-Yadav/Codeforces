
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             int m;
//             string s;
//             cin >> m;
//             cin >> s;

//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve() {
    int n; cin >> n;
    int a = 1e6, b = 1e6, c = 1e6;
    while(n--) {
        int x; cin >> x;
        string s; cin >> s;
        if(s == "01") b = min(b, x);
        if(s == "10") a = min(a, x);
        if(s == "11") c = min(c, x);
    }
    
    if(c == 1e6 && (a == 1e6 || b == 1e6)) cout << -1 << '\n';
    else cout << min(a+b, c) << '\n';
}

signed main() {
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

