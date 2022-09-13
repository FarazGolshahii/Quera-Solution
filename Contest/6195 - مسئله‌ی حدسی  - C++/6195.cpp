// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool prime(ll n) {
    if (n <= 1) return false;
    for (int i = 2; i <= (ll) sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    vector <ll> Ans;
    for (int i = 2; i <= n; i++) {
        if (prime(i)) {
            ll cnt = i;
            while (cnt <= n) {
                cnt *= i;
            }
            Ans.push_back(cnt / i);
        }
    }
    sort(Ans.begin(), Ans.end());
    cout << Ans.size() << endl;
    for (int i = 0; i < Ans.size(); i++)
        cout << Ans[i] << ' ';
}
