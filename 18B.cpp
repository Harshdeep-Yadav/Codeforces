#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int r = -n; r <= n; r++)
    {
        int s = 2 * abs(r);
        for (int i = 0; i < s; i++)
        {
            cout << " ";
        }
        int max = n - abs(r);
        for (int i = 0; i < max; i++)
            cout << i << " ";
        for (int i = max; i > 0; i--)
            cout << i << " ";
        cout << 0 << endl;
    }
}