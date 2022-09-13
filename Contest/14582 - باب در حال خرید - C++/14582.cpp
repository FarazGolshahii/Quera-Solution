// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include<bits/stdc++.h>

using namespace std;
#define mt pair<int,vector<string>>

bool cmp(mt a, mt b) {
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}

bool is(vector <string> a, vector <string> b) {
    if (a.size() < b.size())
        return 0;
    int t = min(a.size(), b.size());
    for (int i = 0; i < t; i++)
        if (a[i] != b[i])
            return 0;
    return 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector < mt> vec;
    while (n--) {
        int k, p;
        cin >> k >> p;
        vector <string> t;
        while (k--) {
            string s;
            cin >> s;
            t.push_back(s);
        }
        vec.push_back({p, t});
    }
    sort(vec.begin(), vec.end(), cmp);
    while (m--) {
        int k;
        vector <string> t;
        cin >> k;
        while (k--) {
            string a;
            cin >> a;
            t.push_back(a);
        }
        for (auto i: vec)
            if (is(i.second, t)) {
                for (auto j: i.second)
                    cout << j << " ";
                cout << endl;
                break;
            }
    }
}