#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);

    for (int &m : v)
        cin >> m;

    for (int i = 0; i < n; i++)
    {
        int t = v[i];
        bool flag = true;

        for (int j = i - 1; j > i - x - 1; j--)
        {
            if (j >= 0)
                if (t >= v[j])
                    flag = false;
        }

        for (int j = i + 1; j < i + y + 1; j++)
        {
            if (j < n)
                if (t >= v[j])
                    flag = false;
        }

        if (flag)
        {

            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}