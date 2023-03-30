#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int zero = 0;
    int n = s.size();
    int p1 = 0, p2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            p1 = i;
            break;
        }
    }
    for (int j = n; j >= p1; j--)
    {
        if (s[j] == '1')
        {
            p2 = j;
            break;
        }
    }

    for (int x = p1; x < p2; x++)
    {
        if (s[x] == '0')
        {
            zero++;
        }
    }
        cout << zero << endl;
}

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }