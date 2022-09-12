// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;
char c[7][7];

int main() {
    for (int i = 0; i < 7; ++i)
        for (int j = 0; j < 7; ++j)
            cin >> c[i][j];
    int cnt = 0;
    for (int i = 0; i < 7; ++i)
        for (int j = 0; j < 7; ++j)
            if (c[i][j] == '.') {
                if (i > 1 && c[i - 1][j] == c[i - 2][j] && c[i - 1][j] == 'o')
                    ++cnt;
                if (i < 5 && c[i + 1][j] == c[i + 2][j] && c[i + 2][j] == 'o')
                    ++cnt;
                if (j > 1 && c[i][j - 1] == c[i][j - 2] && c[i][j - 2] == 'o')
                    ++cnt;
                if (j < 5 && c[i][j + 1] == c[i][j + 2] && c[i][j + 2] == 'o')
                    ++cnt;
            }
    cout << cnt;
    return 0;
}
