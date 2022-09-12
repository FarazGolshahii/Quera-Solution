// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    char ch[5];
    int i, g = 0, y = 0, r = 0;
    cin >> ch;
    for (i = 0; i < 5; i++) {
        if (ch[i] == 'G')
            g++;
        else if (ch[i] == 'Y')
            y++;

        else if (ch[i] == 'R')
            r++;
    }
    if ((r >= 3) || (g == 0) || (r >= 2 && y >= 2)) {
        cout << "nakhor lite";
    } else
        cout << "rahat baash";

    return 0;
}
