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
    int n, m, s = 0;
    cin >> n >> m;
    if (m >= n) {
        cout << n * 1500;
        return 0;
    }
    else {
        s += m * 1500;
        n -= m;
        if (n <= 60) {
            s += n * 1500;
            cout << s;
            return 0;
        }
        else {
            s += 90000;
            n -= 60;
            s += n * 3000;
            cout << s;
            return 0;
        }
    }
    /////////////////////////////////////////////////////////////
}


