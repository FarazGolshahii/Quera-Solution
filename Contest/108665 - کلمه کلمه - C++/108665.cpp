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

vector<char> removeDupWord(string str) {
    vector<char> res;
    for (auto x: str) {
        res.push_back(x);
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<char> res;
    res = removeDupWord(str);
    int s = 0;
    for (int i = 0; i < res.size(); i++) {
        if (res[i] == 'a' || res[i] == 'o' || res[i] == 'i' || res[i] == 'e' || res[i] == 'u')s++;
    }
    cout << pow(2, s);
    return 0;
}
