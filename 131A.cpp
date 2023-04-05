#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    bool istrue = true;

    for (int i = 1; i <= s.size(); i++)
    {
        if (islower(s[i])) // Lock -> s[1] is already lowercase then return without change
        {
            istrue = false;
            break;
        }
    }

    if (istrue) // agar nahi hai to
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (islower(s[i])) // cAPS-> s[0] isko upper me kar do 
            {
                s[i] = toupper(s[i]); // s[i] isko upper me kar do
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << endl;
    return 0;
}