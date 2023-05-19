#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    set<pair<char, char>> st;
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < s.size() - 1; i++)
        {
            char a, b;
            a = s[i];
            b = s[i + 1];
            st.insert({a, b});
        }
        cout << st.size() << endl;
    }
    return 0;
}