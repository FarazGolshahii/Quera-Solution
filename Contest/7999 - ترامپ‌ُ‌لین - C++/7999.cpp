// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

#define y1 def1
#define X first
#define Y second
#define endl '\n'
#define all(o) o.begin(), o.end()
#define IOS ios::sync_with_stdio(0), cin.tie(0)

int main() {
    IOS;
    int n;
    cin >> n;
    for (int i = 30; i >= 0; i--) {
        if (n % (1 << i) == 0) {
            cout << (1 << i) << endl;
            return 0;
        }
    }
}
