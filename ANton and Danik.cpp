#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin >> s;
    int ac = 0;
    int dc = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            ac++;
        else if (s[i] == 'D')
            dc++;
    }
    if (ac > dc)
    {
        cout << "Anton" << endl;
    }
    else if (dc > ac)
    {
        cout << "Danik" << endl;
    }
    else if (ac == dc)
    {
        cout << "Friendship" << endl;
    }

    return 0;
}
