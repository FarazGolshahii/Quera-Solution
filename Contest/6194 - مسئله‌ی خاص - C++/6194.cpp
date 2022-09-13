// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map <ll, ll> A;
    ll n;
    cin >> n;
    ll a[n + 5];
    vector <ll> Unfixed;
    vector <ll> Nums;
    ll Need = true;
    ll Rep = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == -1)
            Unfixed.push_back(i);
        else {
            A[a[i]]++;
            if (A[a[i]] > 1) Need = false;
            if (Rep == -1)
                Rep = a[i];
        }

    }
    if (n == 1) {
        return cout << "impossible", 0;
    }
    if (Rep == -1) {
        a[0] = 1;
        for (int i = 1; i < n; i++) a[i] = i;
        for (int i = 0; i < n; i++) cout << a[i] << ' ';
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        if (A[i] == 0) Nums.push_back(i);
    }
    ll T = 0;
    for (int i = 0; i < Unfixed.size(); i++) {
        if (!Need) {
            a[Unfixed[i]] = Nums[T++];
        } else {
            a[Unfixed[i]] = Rep;
            Need = false;
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}
