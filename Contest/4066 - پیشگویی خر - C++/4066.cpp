// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

long long gcd(long long int a, long long int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

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
    int n, m, i, j, s = 0;
    string f, g;
    cin >> n >> m;
    string a[n][2], b[m];
    fori(i, n) {
        cin >> f >> g;
        a[i][0] = {f};
        a[i][1] = {g};
    }
    fori(i, m) {
        cin >> f;
        s = 0;
        fori(j, n) {
            if (f == a[j][0]) {
                cout << a[j][1] << " kachal! ";
                s++;
                break;
            }
        }
        if (s == 0)cout << "kachal! ";
    }
    /////////////////////////////////////////////////////////////
    return 0;
}
