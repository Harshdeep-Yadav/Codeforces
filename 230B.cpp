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

// TLE-------------


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   
   ll t;
   cin >> t;
   while(t--)
   {
      ll n;
      cin >> n;
      
      int count = 1;
      
      for(int i = 1; i <= n/2; i++)
      {
         if(n%i==0){
            count++;
         }
      }
      
      if(count==3)
         cout << "YES" << endl;
      else
         cout << "NO" << endl;
      
   }
   
   return 0;
}