#include <iostream>
using namespace std;

int main()
{
    int a, b, c, ans;
    cin >> a >> b >> c;
    ans = a + b + c;

    ans = max(ans, a + (b * 3));
    ans = max(ans, a * (b + c));
    ans = max(ans, a * b * c);
    ans = max(ans, (a + b) * 3);

    cout << ans << endl;
}