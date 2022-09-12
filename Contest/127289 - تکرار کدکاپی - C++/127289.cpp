// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

vector<char> removeDupWord(string str) {
    vector<char> res;
    for (auto x: str) {
        res.push_back(x);
    }
    return res;
}

int main() {
    string str = "codecup6";
    int n;
    cin >> n;
    vector<char> res;
    vector<char> temp;
    while (res.size() < 100) {
        temp = removeDupWord(str);
        res.insert(res.end(), temp.begin(), temp.end());
    }
    cout << res[n - 1];
    return 0;
}
