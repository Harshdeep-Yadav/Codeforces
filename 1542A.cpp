#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    int e = 0, o = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            e++;
        else
            o++;
    }
    if (e == o)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";
}

int main(){
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}