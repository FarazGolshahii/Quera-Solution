// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int maxN = 100 * 1000 + 100;
const int inf = 1000 * 1000 * 1000;

int n, m;
vector<int> a[maxN], dp[maxN];

bool check(int lim) {
    vector<int> queue;
    for (int i = 0; i < m; i++)
        for (int j = a[i].size() - 1; j >= 0; j--) {
            int next = j + 1 < a[i].size() ? dp[i][j + 1] : inf;
            dp[i][j] = min(a[i][j] < lim ? a[i][j] : inf, next - 1);
            if (dp[i][j] < lim)
                queue.push_back(dp[i][j]);
        }
    sort(queue.begin(), queue.end());

    for (int i = 0; i < queue.size(); i++)
        if (queue[i] < i + 1)
            return false;
    return queue.size() < lim;
}

int main() {
    cin >> m;
    for (int i = 0, k; i < m; i++) {
        cin >> k;
        n += k;
        for (int j = 0, x; j < k; j++)
            cin >> x, a[i].push_back(x);
        dp[i].resize(k);
    }

    int s = 0, e = n + 1;
    while (e - s > 1) {
        int m = (s + e) >> 1;
        (check(m) ? s : e) = m;
    }

    cout << s << endl;
    return 0;
}
