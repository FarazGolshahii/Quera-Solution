// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
const int N = 3003;

int a[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int e = 0;
    bool chi = false;
    for (int i = 0; i < n; i++) {
        sort(a, a + n);
        reverse(a, a + n);
        for (int j = 1; a[0] > 0 && a[j] > 0 && j < n; j++) {
            a[j]--;
            a[0]--;
            e++;
        }
        if (a[0] > 0)
            chi = true;
        a[0] = 0;
    }
    if (!chi)
        e--;
    cout << ++e;
}
