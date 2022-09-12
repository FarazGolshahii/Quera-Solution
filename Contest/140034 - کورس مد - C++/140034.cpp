// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>

using namespace std;

int CeilIndex(std::vector<int> &v, int l, int r, int key) {
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (v[m] >= key)
            r = m;
        else
            l = m;
    }

    return r;
}

int LongestIncreasingSubsequenceLength(std::vector<int> &v) {
    if (v.size() == 0)
        return 0;

    std::vector<int> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail

    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {

        // new smallest value
        if (v[i] < tail[0])
            tail[0] = v[i];

            // v[i] extends largest subsequence
        else if (v[i] > tail[length - 1])
            tail[length++] = v[i];

        else
            tail[CeilIndex(tail, -1, length - 1, v[i])] = v[i];
    }

    return length;
}

int main() {
    int n, a;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    cout << LongestIncreasingSubsequenceLength(v);
    return 0;
}
