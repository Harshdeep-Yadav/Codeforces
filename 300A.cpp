// #include <bits/stdc++.h>
// using namespace std;
// #define pb push_back

// int main()
// {
//     int siz;
//     cin >> siz;
//     vector<int> p, n, z;
//     int x;
//     for (int i = 0; i < siz; i++)
//     {
//         cin >> x;
//         if (x > 0)
//         {
//             p.pb(x);
//         }
//         else if (x == 0)
//         {
//             z.pb(x);
//         }
//         else
//         {
//             n.pb(x);
//         }
//     }
//     if (p.size() == 0)
//     {
//         x = n[0];
//         p.pb(x);
//         x = n[1];
//         p.pb(x);
//         n.erase(n.begin() + 0);
//         n.erase(n.begin() + 0);
//     }
//     cout << "1" << n[0] << endl;
//     cout << p.size() << " ";
//     for (int i = 0; i < p.size(); i++)
//     {
//         cout << p[i] << " ";
//     }
//     cout << endl;
//     cout << n.size() + z.size() - 1 << " ";
//     for (int i = 0; i < n.size(); i++)
//     {
//         cout << n[i] << " ";
//     }
//     for (int i = 0; i < z.size(); i++)
//     {
//         cout << z[i] << endl;
//     }
//     return 0;
// }

// correct

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main()
{
    int n, x;
    cin >> n;
    vector<int> pve, neg, zro;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x == 0)
            zro.push_back(x);
        else if (x > 0)
            pve.push_back(x);
        else
            neg.push_back(x);
    }
    if (pve.size() == 0)
    {
        x = neg[0];
        pve.push_back(x);
        x = neg[1];
        pve.push_back(x);
        neg.erase(neg.begin() + 0);
        neg.erase(neg.begin() + 0);
    }
    cout << "1 " << neg[0] << endl;
    cout << pve.size() << " ";
    for (int i = 0; i < pve.size(); ++i)
    {
        cout << pve[i] << " ";
    }
    cout << endl;
    cout << neg.size() + zro.size() - 1 << " ";
    for (int i = 1; i < neg.size(); ++i)
    {
        cout << neg[i] << " ";
    }
    for (int i = 0; i < zro.size(); ++i)
    {
        cout << zro[i] << endl;
    }
    return 0;
}