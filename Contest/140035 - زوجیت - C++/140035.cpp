// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main() {
    int n;
    cin >> n;
    if (n % 2 == 1) {
        if (isPrime(n)) {
            cout << "zoj";
            return 0;
        } else {
            cout << "fard";
            return 0;
        }
    } else {
        cout << "fard";
        return 0;
    }

}
