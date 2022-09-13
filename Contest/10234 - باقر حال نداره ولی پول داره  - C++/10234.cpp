// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

# include <iostream>
# include <cstring>

using namespace std;

const int oo = 999999999;
int dp[11][10001], a[11], n, m;

int mem(int pos, int need) {
    if (pos == 0) {
        if (need == 0)
            return 0;
        else
            return oo;
    }
    int &ret = dp[pos][need];
    if (ret != -1) {
        return ret;
    }
    ret = oo;
    for (int i = 0; i * i <= need; i++) {
        ret = min(ret, mem(pos - 1, need - i * i) + (a[pos] - i) * (a[pos] - i));
    }
    return ret;
}

int main() {
    memset(dp, -1, sizeof dp);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int ans = oo;
    ans = min(ans, mem(n, m));
    cout << ((ans == oo) ? -1 : ans) << endl;
    return 0;
}
