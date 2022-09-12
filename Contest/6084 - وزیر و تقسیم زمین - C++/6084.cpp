// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

const int MAXN = 1e6 + 100;

int a[MAXN];

LL sum[MAXN];

int main() {
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + a[i - 1];

    vector<int> v;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            v.push_back(i);

    int ans = -1;
    for (int i = 0; i < v.size(); i++) {
        int d = v[i];
        LL SUM = sum[d];
        bool okay = true;
        for (int j = 1; d * j <= n; j++)
            if (SUM != sum[j * d] - sum[(j - 1) * d])
                okay = false;

        if (okay)
            ans = max(ans, n / d);
    }

    cout << ans << endl;

    return 0;
}
