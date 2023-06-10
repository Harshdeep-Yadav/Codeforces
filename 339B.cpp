#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll time = 0;
    ll dis = 0;
    ll curr_house = 1;
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;

        dis = x - curr_house;

        if (dis >= 0)
        {
            time += dis;
        }
        else
        {
            time += n + dis;
        }
        curr_house = x;
    }
    cout << time << endl;
    return 0;
}