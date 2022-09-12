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
    int b, i, c = 0, d;
    string a, n1, n2;
    cin >> a;
    for (i = 0; i < a.size(); i++) {
        if (a[i] == '=') {
            if (a[i] == a[0]) a.erase(0, 1);
            else a.erase(i - 1, 2);

            i = 0;
        }
    }
    cout << a;
    /////////////////////////////////////////////////////////////
    return 0;
}
