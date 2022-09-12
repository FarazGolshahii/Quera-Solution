// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 510;

int dis[N][N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> dis[i][j];

    for (int i = 0; i < n; i++)
        if (dis[i][i] != 0)return 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (dis[i][j] != dis[j][i])return 0;

    int ans = 0;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            bool ok = false;
            for (int k = 0; k < n; k++) {
                if (dis[i][j] > dis[i][k] + dis[k][j])return cout << -1 << endl, 0;
                else if (k != i && k != j && dis[i][j] == dis[i][k] + dis[k][j])ok = true;
            }
            if (!ok)ans++;
        }
    cout << ans << endl;
}
