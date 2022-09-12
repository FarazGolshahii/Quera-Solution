// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int Kh_triangle[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            Kh_triangle[i][j] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i <= 1)
                break;
            if (j == 0 || j == i)
                continue;
            Kh_triangle[i][j] = Kh_triangle[i - 1][j - 1] + Kh_triangle[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++)
            cout << Kh_triangle[i][j] << " ";
        cout << endl;
    }
    return 0;
}




