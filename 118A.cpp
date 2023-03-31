#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string s, res;
    cin >> s;
    n = s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        else
        {
            res += '.';
            res += s[i];
        }
    }
    cout << res << endl;

    return 0;
}
