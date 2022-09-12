// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<bits/stdc++.h>

#define F first
#define S second
#define ll long long
#define pb push_back

using namespace std;

typedef pair<int, int> pii;

int A[44][44];

int main() {
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> A[i][j];

    int ans = 0;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        ans += A[x][y];
    }
    cout << ans;

    return 0;
}