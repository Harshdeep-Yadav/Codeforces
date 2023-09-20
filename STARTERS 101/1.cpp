#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        int y = accumulate(a.begin(), a.end(), 0);
        if (h > y)
        {
            cout << 0 << endl;
            continue;
        }
        
        for (int i = 0; i < n; i++)
        {
            if (h > y - a[i])
            {
                cout << a[i] << endl;
                break;
            }
            else
            {
                y = y - a[i];
                continue;
            }
        }
    }
    return 0;
}