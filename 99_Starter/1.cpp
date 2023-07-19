// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--){

// //     }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, y, r;
//         cin >> x >> y >> r;
//         int total = x + (r / 30);

//         if (total % y > 1)
//         {
//             cout << (total / y) + 1 << endl;
//         }

//         else
//         {
//             cout << (total / y) + (total % y) << endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vtor<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        long long int res = accumulate(v.begin(), v.end(), 0);
        for (int i = 1; i <= n; i++)
        {
            cout << res << " ";
            res -= v[i - 1];
        }
        cout << endl;
    }
    return 0;
}