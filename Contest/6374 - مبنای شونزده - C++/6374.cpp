// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
#define ll int
#define N ((ll)110)

string s;

int main() {
    cin >> s;
    bool flg = 0;
    for (int i = (ll) s.size() - 1; i >= 0; i--) {
        if (s[i] != 'F') {
            s[i]++;
            flg = 1;
            break;
        }
        s[i] = '0';
    }
    if (!flg)cout << '1' + s;
    else cout << s;
    return 0;
}
