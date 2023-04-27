#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string hello = "hello";
    int pass = 0;
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == hello[j])
        {
            pass++;
            j++;
        }
    }
    if (pass == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}