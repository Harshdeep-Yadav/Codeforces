#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a;
    ll p = 0, neg = 0;
    vector<ll> w1, w2;
    bool last = false;
    while (n--)
    {
        cin >> a;
        if (a > 0)
        {
            w1.pb(a);
            p += a;
        }
        else
        {
            w2.pb(-a);
            neg += -a;
        }
        last = a > 0;
    }

    if (p > neg)
    {
        cout << "first" << endl;
    }
    else if (neg > p)
    {
        cout << "second" << endl;
    }
    else
    {
        while (!w1.empty() && !w2.empty())
        {
            if (w1.front() > w2.front())
            {
                cout << "first";
                return 0;
            }
            else if (w2.front() > w1.front())
            {
                cout << "second";
                return 0;
            }
            w1.erase(w1.begin());
            w2.erase(w2.begin());
        }
        if (w1.empty() && !w2.empty())
        {
            cout << "second";
        }
        else if (w2.empty() && !w1.empty())
        {
            cout << "first";
        }
        else
        {
            cout << (last ? "first" : "second");
        }
    }
    return 0;
}