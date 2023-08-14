// #include <bits/stdc++.h>
// using namespace std;
// class solution
// {
// public:
//     void solve()
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n + 2);
//         int sum = 0;
//         for (auto &it : v)
//         {
//             cin >> it;
//             sum += it;
//         }

//         sort(v.begin(), v.end());

//         sum -= (v[n] + v[n + 1]);

//         if (sum == v[n] || sum == v[n + 1]){
//             for (int i = 0; i < n; i++)
//             {
//                 cout << v[i] << " ";
//             }
//             cout << endl;
//             return;
//         }

//         bool theehai = false;

//         for (int i = 0; i < n; i++)
//         {
//             int tmp = sum - v[i];
//             if (tmp + v[n] == v[n + 1])
//             {
//                 theehai = true;
//                 v[i] = v[n];
//                 break;
//             }
//         }

//         if (!theehai)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 cout << v[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solution s;
//         s.solve();
//     }
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long 
class solution
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 2);
        ll sum = 0;
        for (ll i = 0; i < n + 2; i++)
        { // Fix the loop here
            cin >> v[i];
            sum += v[i];
        }

        sort(v.begin(), v.end());

        sum -= (v[n] + v[n + 1]);

        if (sum == v[n] || sum == v[n + 1])
        {
            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            return;
        }

        bool theehai = false;

        for (ll i = 0; i < n; i++)
        {
            ll tmp = sum - v[i];
            if (tmp + v[n] == v[n + 1])
            {
                theehai = true;
                v[i] = v[n];
                break;
            }
        }

        if (!theehai)
        {
            cout << -1 << endl;
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solution s;
        s.solve();
    }
}



#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

class TC
{

public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 2);
        ll total = 0;
        for (auto &x : v)
        {
            cin >> x;
            total += x;
        }
        sort(v.begin(), v.end());
        total -= (v[n] + v[n + 1]);
        if (total == v[n] || total == v[n + 1])
        {
            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            return;
        }

        bool ok = false;

        for (ll i = 0; i < n; i++)
        {
            ll temp = total - v[i];
            if (temp + v[n] == v[n + 1])
            {
                ok = true;
                v[i] = v[n];
                break;
            }
        }

        if (!ok)
            cout << -1 << endl;
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases;
    for (int i = 1; i <= testcases; i++)
    {
        TC tc;
        tc.solve();
    }

    return 0;
}