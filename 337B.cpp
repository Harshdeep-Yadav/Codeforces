#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a, b, c, d;
    cin >> a >>b >>c >>d;

    int ansa, ansb;
    if(b*c >= a*d)
    {
        ansa = b*c - a*d;
        ansb = b*c;
    }
    else
    {
        ansa = a*d - b*c;
        ansb = a*d;
    }

    int ansc = __gcd(ansa, ansb);

    cout<<ansa/ansc<<"/"<<ansb/ansc<<endl;

    return 0;
}