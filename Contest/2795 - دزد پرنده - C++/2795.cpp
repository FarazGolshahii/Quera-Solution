// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int j, i, n, t, p, a, b, s = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> t >> p;
        vector<int> f(t + 1, -1);
        for (j = 0; j < p; j++) {
            cin >> a >> b;
            f[a] = b;
        }
        s = 0;
        for (j = 1; j < t; j++) {
            if (f[j] == 0 && f[j + 1] == 1) {
                cout << "No" << endl;
                s++;
                break;
            }
            else if (f[j] == 1 && f[j + 1] == 0) {
                cout << "No" << endl;
                s++;
                break;
            }

        }
        if (s == 0)cout << "Yes" << endl;
    }
    return 0;
}
