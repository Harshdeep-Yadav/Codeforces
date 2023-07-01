#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
    return a > b; // Compare in descending order
}

int main(){
    int r;
    cin >> r;
   

    int a[r];
    for(int i=0;i<r;i++){
        cin >> a[i];
    }

    sort(a,a+r,compare);
     int rr=0;
    for (int i = 0; i < r; ++i)
    {
        rr += a[i] * a[i] * (1 - i % 2 * 2);
    }
    double pi = asin(1) * 2;
    cout << fixed << setprecision(10) << (pi * rr) << endl;
    return 0;
}