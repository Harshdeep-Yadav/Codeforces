// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     int a, g;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a >> g;
    
//     sum += a;
//     if (sum <= 500)
//     {
//         cout << "A";
//     }
//     else
//     {
//         sum -= 1000;
//         cout << "G";
//     }
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    cin >> n;

    string ans; 
    int sum = 0;

    for(int i=0; i < n; ++i ){
        int x, y;
        cin >> x >> y;

        if(abs(sum - y) <= 500)
            ans += 'G', sum -= y;
        else
            ans += 'A', sum += x;
    }
    cout << ans << endl;
    return 0;
}