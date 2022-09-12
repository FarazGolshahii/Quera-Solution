// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

bool isTriangleExists(int a, int b, int c) {

    if ((a + b) > c && (b + c) > a && (a + c) > b)
        return true;
    else
        return false;
}

int main() {
    int a;
    vector<int> sizes;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        sizes.push_back(a);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int f = j + 1; f < 5; f++) {
                if (isTriangleExists(sizes[i], sizes[j], sizes[f])) {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";

}
