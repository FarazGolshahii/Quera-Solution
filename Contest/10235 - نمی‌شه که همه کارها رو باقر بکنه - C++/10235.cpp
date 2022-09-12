// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
const int MOD = (int) 1e9 + 7;
const int MAXN = (int) 2e5 + 7;
const ll inf = (ll) 1e18;
const int infint = (int) 2e9;
int a[MAXN], b[MAXN], out[MAXN], visited[MAXN], c[MAXN], indx[MAXN];
int comp = 0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        indx[a[i]] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        out[a[i]] = b[i];
    }
    for (int i = 0; i < n; i++)
        cin >> c[i];
    vector<int> first;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int root = -1, j = i;
            comp++;
            vector<int> all;
            all.push_back(j);
            visited[j] = comp;

            while (!visited[out[j]]) {
                all.push_back(out[j]);
                visited[out[j]] = comp;
                j = out[j];
            }
            j = out[j];
            if (visited[j] < comp)
                continue;
            //cout << j << "\n";
            int ind = -1;
            for (int k = 0; k < all.size(); k++) {
                if (all[k] == j) {
                    ind = k;
                }
                if (ind != -1)
                    first.push_back(all[k]);
            }
        }
    }
    fill(out, out + MAXN, -1);
    fill(visited, visited + MAXN, 0);
    comp = 0;
    for (int i = 0; i < first.size(); i++)
        out[first[i]] = c[indx[first[i]]];
    int ans1 = 0;
    for (auto i: first) {
        if (!visited[i]) {
            int root = -1, j = i;
            comp++;
            vector<int> all;
            all.push_back(j);
            visited[j] = comp;

            while (out[j] != 0 and !visited[out[j]]) {
                all.push_back(out[j]);
                visited[out[j]] = comp;
                j = out[j];
            }
            j = out[j];
            if (visited[j] < comp or out[j] == 0)
                continue;
            //cout << j << "\n";
            int ind = -1;
            for (int k = 0; k < all.size(); k++) {
                if (all[k] == j) {
                    ind = k;
                    break;
                }
            }
            ans1 += all.size() - ind;
        }
    }
    cout << n - ans1;
}