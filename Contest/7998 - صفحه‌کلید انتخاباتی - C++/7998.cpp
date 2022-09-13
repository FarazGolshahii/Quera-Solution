// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

#define pb push_back
#define pii pair<int,int>
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 100019;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    bool st = 0;
    string ans = "";
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.size() == 1) {
            if (!st)ans += s;
            else ans += (char) (s[0] - 'a' + 'A');
        } else st = !st;
    }
    cout << ans << endl;
}