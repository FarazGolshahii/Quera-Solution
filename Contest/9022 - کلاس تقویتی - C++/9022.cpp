// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cassert>

using namespace std;

#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

#define rep(i, s, e) for(int i = s; i < e; i ++)
#define X first
#define Y second

typedef long long ll;
typedef long double ld;
const int maxN = 1000 * 100 + 5;
const int maxM = 1000 * 1000 + 5;
const int mod = 1000 * 1000 * 1000 + 7;
const int base = 701;
const int SQ = 500;
const int maxL = 20;

int a[maxN];
bool mark[maxN];


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    if (s == "1" || s == "2") {
        cout << s << endl;
        return 0;
    }

    for (int i = s.size() - 1; i >= 0; i--)
        if (s[i] == '0')
            s[i] = '9';
        else {
            s[i]--;
            break;
        }


    if (s[0] == '0')
        s = s.substr(1);


    cout << s << endl;


    return 0;
}