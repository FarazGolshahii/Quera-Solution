// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);

}

char asciiToChar(int n) {
    return char(n);
}

int charToAscii(char n) {
    return int(n);
}

vector<char> removeDupWord(string str) {
    vector<char> res;
    for (auto x: str) {
        res.push_back(x);
    }
    return res;
}

int main() {
    int n, a;
    string str;
    cin >> n >> a >> str;
    vector<char> data;
    data = removeDupWord(str);
    for (int j = 0; j < a; j++) {
        data.insert(data.begin(), data[n - 1]);
        for (int i = 0; i < n; i++) {
            if (data[i] == 'z') {
                data[i] = 'a';
            } else {
                int as = charToAscii(data[i]);
                data[i] = asciiToChar(as + 1);
            }

        }
    }
    for (int i = 0; i < n; i++) {
        cout << data[i];
    }
}
