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
    float n, m;
    cin >> n >> m;
    fori(i, m) {
        n = n / 2;
    }
    cout << floor(n);
    /////////////////////////////////////////////////////////////
    return 0;
}
