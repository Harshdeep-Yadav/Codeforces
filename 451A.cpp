#include <iostream>
using namespace std;

int main()
{
    int n, m, b;
    cin >> n >> m;
    int a = n * m;
    if (m > n)
    {
        b =a/ m;
    }
    else
        b =a/n;
    if (b % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
        cout << "Akshat" << endl;
    return 0;
}
