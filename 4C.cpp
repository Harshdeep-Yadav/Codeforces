#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            mp[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            int cnt = mp[s];
            string res = s + to_string(cnt);

            while (mp.find(res) != mp.end())
            {
                cnt++;
                res = s + to_string(cnt);
            }
            mp[res] = 1;
            mp[s] = cnt + 1;
            cout << res << endl;
        }
    }
    return 0;
}
