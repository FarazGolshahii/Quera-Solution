// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;

int a, b, c;

int32_t main() {
    cin >> a >> b >> c;
    a %= 2, b %= 2, c %= 2;
    if (a == b && b == c)
        cout << "NO NO NO\n";
    else if (a == b) cout << "NO NO YES\n";
    else if (a == c) cout << "NO YES NO\n";
    else if (c == b) cout << "YES NO NO\n";
}
