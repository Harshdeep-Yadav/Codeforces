#include <bits/stdc++.h>
using namespace std;

// void solve(){

// }
int main()
{
    int n, a;
    cin >> n;
    int i = 0;
    vector<int> v;
    for (int i = 0; i < 7; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int sum = v[0];
    while (sum < n)
    {
        i++;
        i %= 7; // this will stop i going out of (bounds=7 days)
        sum += v[i];
    }

    cout << i + 1 << endl;
    return 0;
}