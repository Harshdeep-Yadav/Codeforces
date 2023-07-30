#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        mp[c]++;
    }

    int hun_1 = mp[100];
    int hun_2 = mp[200];

    int baki_2 = hun_2 % 2;
    int baki_1 = hun_1 - (baki_2 * 2);

    if (baki_1 >= 0 && baki_1 % 2 == 0)
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}