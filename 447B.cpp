#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<int> val(26 + 1);
    for (int i = 1; i <= 26; i++)
    {
        cin >> val[i];
    }

    int maxi = *max_element(val.begin(), val.end());
    int res = 0;

    for (int i = 0; i < s.size() + k; i++)
    {
        if (i < s.size())
        {
            res += ((i + 1) * val[s[i] - 'a' + 1]);
        }
        else
        {
            res += ((i + 1) * maxi);
        }
    }
    cout << res << endl;
}