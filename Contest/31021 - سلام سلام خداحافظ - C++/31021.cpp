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
    int n, i, j;
    cin >> n;
    string a;
    vector <string> b;
    fori(i, n) {
        cin >> a;
        b.push_back(a);
    }
    //salam
    for (i = 1; i < n; i++) {
        for (j = i - 1; j >= 0; j--) {
            cout << b[i] << ": salam " << b[j] << "!" << endl;
        }
    }
    //khodafez
    fori(i, n) {
        cout << b[i] << ": khodafez bacheha!" << endl;
        for (j = i + 1; j < n; j++) {
            cout << b[j] << ": khodafez " << b[i] << "!" << endl;
        }
    }
    /////////////////////////////////////////////////////////////
    return 0;
}
