// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

LL SubSeg(int n) {
    return (1LL * n * (n + 1) / 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    n--;
    int maxL = 1, maxR = m;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        maxL = max(l, maxL);
        maxR = min(r, maxR);
    }

    cout << SubSeg(m) - SubSeg(maxL - 1) - SubSeg(m - maxR) << endl;

    return 0;
}
