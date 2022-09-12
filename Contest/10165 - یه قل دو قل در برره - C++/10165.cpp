// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5e5 + 10;

pair<int, int> arr[MAXN];
int n;
int have[MAXN], num, maper;
map<int, int> mp;
int answer = 1e9 + 1;

int main() {
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
        if (mp[arr[i].second] == 0) {
            mp[arr[i].second] = ++maper;
        }
        arr[i].second = mp[arr[i].second];
    }
    sort(arr, arr + n);
    int posl = 0;
    int posr = 0;
    have[arr[0].second]++;
    num = 1;
    for (int i = 0; i < n; i++) {
        if (i) {
            posl++;
            have[arr[posl - 1].second]--;
            if (have[arr[posl - 1].second] == 0) {
                num--;
            }
        }
        while (num < maper && posr < n - 1) {
            posr++;
            have[arr[posr].second]++;
            if (have[arr[posr].second] == 1) {
                num++;
            }
        }
        //cout << posl << ' ' << posr <<' ' << arr[posr].first << ' ' << arr[posl].first << ' ' << endl;
        if (num == maper)
            answer = min(answer, arr[posr].first - arr[posl].first);
    }
    cout << answer;
    //cin >> n;
    return 0;
}
