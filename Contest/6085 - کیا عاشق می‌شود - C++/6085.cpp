// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>

using namespace std;

inline int in() {
    int x;
    scanf("%d", &x);
    return x;
}

const int N = 200002;

int h[N], l[N], dp[N];

int main() {
    int n = in();
    for (int i = 1; i <= n; i++) {
        h[i] = in();
        l[i] = i - 1;
        while (h[l[i]] > h[i])
            l[i] = l[l[i]];
        dp[i] = 1;
        if (h[l[i]] == h[i])
            dp[i] += dp[l[i]];
    }
    cout << *max_element(dp, dp + n + 1) << endl;
}
