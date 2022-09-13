// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    long long int n;
    for (int i = 0; i <= 3; i--) {
        cin >> n;
        if (n == 0) {
            break;
        }
        if (n <= 1000000) {
            cout << n << endl;
        } else if (n > 1000000 && n <= 5000000) {
            cout << n - (n * 10) / 100 << endl;
        } else if (n > 5000000) {
            cout << n - (n * 20) / 100 << endl;
        }

    }
    return 0;
}
