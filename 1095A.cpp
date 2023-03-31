#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int x = 2;

    for (int i = 0; i < n; i += x, x++)
    {
        cout << str.at(i);
    }

    cout << endl;
    return 0;
}