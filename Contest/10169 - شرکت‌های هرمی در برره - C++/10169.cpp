// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<iostream>

using namespace std;

#include<algorithm>
#include<map>
#include<vector>
#include <iomanip>
#include <set>
#include<cmath>

#define F first
#define S second
#define pii pair<int,int>
#define pb push_back
#define ll long long
#define mp make_pair
#define error(x) cout<<#x<<"="<<(x)<<endl;

void sp(double y, int x) { cout << fixed << setprecision(x) << y; }

int inf = 1e9 + 10;
int const M = 2e5 + 10;
int const M2 = 1e6 + 10;
int const M3 = 1e3 + 10;
int mod = 1e9 + 7;
ll pw[M];

int sa(int x, int y) {
    if (x % y == 0)return x / y;
    return x / y + 1;
}

int binp(int x, int y) {
    int ans = 1;
    int t = x;
    while (y != 0) {
        if (y % 2 == 1) {
            ans *= t;
            ans;
        }
        y /= 2;
        t *= t;
        t;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n;
    cin >> n;
    string x;
    cin >> x;
    pw[0] = 1;
    for (int i = 1; i <= 32; i++)
        pw[i] = pw[i - 1] * 2;
    ll inc = 0;
    ll now = pw[n + 1] - 1;
    ll pnt = pw[n + 1] - 1;
    for (int i = 0; i < x.size(); i++) {
        ll mo = 1;
        if (x[i] == 'L')
            mo = 0;
        pnt -= pw[i];
        inc += mo;
        now = pnt - inc;
        inc *= 2;
    }
    cout << now;
}
