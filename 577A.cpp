#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (x % i == 0 && x / i <= n) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
