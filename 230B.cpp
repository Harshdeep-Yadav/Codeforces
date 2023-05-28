#include <bits/stdc++.h>
using namespace std;

bool prime[1000001];
void sieve()
{
    prime[0] = prime[1] = true;

    for (int i = 4; i <1000001; i += 2)
    {
        prime[i] = true;
    }

    for (int i = 3; i*i <= 1000001; i += 2)
    {
        if (!prime[i])
        {
            for (int j = i * i; j < 1000001; j += 2 * i)
            {
                prime[j] = true;
            }
        }
    }
}
int main()
{

    sieve();

    long long t;
    cin >> t;
    long long n, r;
    while (t--)
    {
        cin >> n;
        r = sqrt(n);
        if (!prime[r] && r * r == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}


