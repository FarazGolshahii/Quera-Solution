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
const int MAXN = 4e5 + 10;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    /////////////////////////////////////////////////////////////
    int n, m, i;
    cin >> n >> m;
    if (n == m) {
        cout << "Saal Noo Mobarak!";
        return 0;
    } else if (n < m) {
        fori(i, m - n) {
            cout << "R";
        }
        return 0;
    } else {
        fori(i, n - m) {
            cout << "L";
        }
        return 0;
    }
    /////////////////////////////////////////////////////////////

}