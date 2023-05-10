#include <bits/stdc++.h>
using namespace std;    

int main()
{

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int Costn = n * a;
    int Costm=((n/m)+1)*b;
    
    // cout<<Costm<<endl;

    int Costnm = (((n / m) * b) + ((n%m) * a));
    int res = min(Costn, min(Costnm, Costm));

    cout << res << endl;
    return 0;
}