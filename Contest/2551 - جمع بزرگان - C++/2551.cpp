// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    int l1, l2;
    char a;

    cin >> s1 >> a >> s2;
    l1 = s1.size();
    l2 = s2.size();
    if (l1 > l2) {
        if (a == '+') {
            s1[l1 - l2] = '1';
            cout << s1;
        } else {
            s1.append(s2);
            s1[l1] = '0';
            s1.erase(l1 + l2 - 1, 1);
            cout << s1;
        }
    } else {
        if (a == '+') {
            if (l1 != l2)
                s2[l2 - l1] = '1';
            else
                s2[0] = '2';
            cout << s2;
        } else {
            s1.append(s2);
            s1[l1] = '0';
            s1.erase(l1 + l2 - 1, 1);
            cout << s1;
        }
    }
    return 0;
}
