// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

#define F first
#define S second
#define pii pair<int, int>
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 1000;

int main() {
    int ans = 0, A, B, x;
    cin >> A >> B >> x;
    for (int i = 1; i <= A; i++)
        for (int j = 1; j <= B; j++) {
            if (A % i == 0 && B % j == 0 && (i + j) <= x)
                ans++;
        }
    cout << ans << endl;
}