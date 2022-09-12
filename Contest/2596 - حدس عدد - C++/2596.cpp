// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

set<int> a;

bool isOk(int n) {
    set<int> b = a;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            b.erase(i);
    return b.empty();
}

int main() {
    int q, x;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> x;
        a.insert(x);
    }
    int ans = 0;
    for (int i = 1; i <= 1000; i++)
        ans += isOk(i);
    cout << ans;
}
