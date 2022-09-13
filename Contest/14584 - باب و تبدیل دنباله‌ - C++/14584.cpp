// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<bits/stdc++.h>

#define int long long
#define pii pair<int,int>
#define F first
#define S second
using namespace std;
const int M = 5e5 + 10;
int a[M], psum[M], pos[M];
pii b[M];

int32_t main() {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] -= (i - 1) * k;
        b[i] = {a[i], i};
        sum += a[i];
    }
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++)
        pos[b[i].S] = i, psum[i] = psum[i - 1] + b[i].F;
    int ans = -1;
    for (int i = 1; i <= n; i++) {
        int curr = sum - psum[pos[i] - 1] - psum[pos[i]] + (2 * pos[i] - 1 - n) * a[i];
        if (ans == -1)
            ans = curr;
        ans = min(ans, curr);
    }
    cout << ans;
}