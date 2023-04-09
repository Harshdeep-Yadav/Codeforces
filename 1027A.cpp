#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

bool isPalin(string s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag=1;
        if (isPalin(s))
        {
            cout << "YES" << endl;
        }
        else
        {

            for (int i = 0, j = n - 1; i < j; i++, j--)
            {
                if ((s[i] + 1 == s[j] + 1) || (s[i] + 1 == s[j] - 1) || (s[i] - 1 == s[j] + 1) || (s[i] - 1 == s[j] - 1))
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}