// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    int s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, sum = 0;
    int a, b, c, s;
    cin >> a;
    for (int j = 0; j < a; j++) {
        cin >> n;
        s = n.size();
        if (n[0] == 's') s0++;
        if (n[0] == '1') s1++;
        if (n[0] == '2') s2++;
        if (n[0] == '3') s3++;
        if (n[0] == '4') s4++;
        if (n[0] == '5') s5++;
        if (n[0] == 'j') s6++;
    }
    cin >> b;
    for (int j = 0; j < b; j++) {
        cin >> n;
        s = n.size();
        if (n[0] == 's') s0++;
        if (n[0] == '1') s1++;
        if (n[0] == '2') s2++;
        if (n[0] == '3') s3++;
        if (n[0] == '4') s4++;
        if (n[0] == '5') s5++;
        if (n[0] == 'j') s6++;
    }
    cin >> c;
    for (int j = 0; j < c; j++) {
        cin >> n;
        s = n.size();
        if (n[0] == 's') s0++;
        if (n[0] == '1') s1++;
        if (n[0] == '2') s2++;
        if (n[0] == '3') s3++;
        if (n[0] == '4') s4++;
        if (n[0] == '5') s5++;
        if (n[0] == 'j') s6++;
    }
    if (s0 == 0) sum++;
    if (s1 == 0) sum++;
    if (s2 == 0) sum++;
    if (s3 == 0) sum++;
    if (s4 == 0) sum++;
    if (s5 == 0) sum++;
    if (s6 == 0) sum++;
    cout << sum;
    return 0;
}
