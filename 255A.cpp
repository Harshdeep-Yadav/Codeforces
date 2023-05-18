#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int chest = 0;
    int biceps = 0;
    int back = 0;
    int a;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i % 3 == 1)
            chest += a;
        else if (i % 3 == 2)
            biceps += a;
        else
            back += a;
    }

    if (chest > back && chest > biceps)
    {
        cout << "chest" << endl;
    }
    else if (back > chest && back > biceps)
    {
        cout << "back" << endl;
    }
    else
    {
        cout << "biceps" << endl;
    }
    return 0;
}