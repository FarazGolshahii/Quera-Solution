// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> numbers;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        vector<int> temp2;
        while (temp > 0) {
            temp2.push_back(temp % 10);
            temp = temp / 10;
        }
        for (int j = temp2.size() - 1; j >= 0; j--) {
            numbers.push_back(temp2[j]);
        }
    }
    cout << numbers[n - 1];
    return 0;
}
