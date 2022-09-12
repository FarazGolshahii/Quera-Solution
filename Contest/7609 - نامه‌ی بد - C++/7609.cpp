// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
const int maxn = 1e5 + 20;
int res;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        res = 1;
        while (i < s.size() && s[i] == s[i + 1])
            res++, i++;
        if (res & 1) {
            cout << "bad";
            return 0;
        }
    }
    cout << "khoob";
}
