#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size() - 1;
    int ind = n;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] - '0') % 2 == 0)
        {
            ind = i;
            if (s[n] > s[i])
            {
                break;
            }
        }
    }
    if (n == ind)
    {
        cout << -1 << endl;
    }
    else
    {
        swap(s[n], s[ind]);
        cout << s << endl;
    }
}

