// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;
typedef long long ll;

#define F first
#define S second
#define pb push_back
#define endl '\n'
#define all(o) o.begin(), o.end()
#define fori(i, a) for (int i = 0; i < (a); i++)
const int MAXN = 1e9 + 1;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    /////////////////////////////////////////////////////////////
    int a, b, s = 0;
    fori(i, 3) {
        cin >> a >> b;
        s += min(a, b);
    }
    cout << s;
    /////////////////////////////////////////////////////////////
    return 0;
}


