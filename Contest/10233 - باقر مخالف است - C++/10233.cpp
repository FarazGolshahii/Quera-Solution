// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

# include <algorithm>
# include <iostream>

using namespace std;

char a[20];

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        a[i] = s[i];
    }
    if (next_permutation(a, a + s.size())) {
        for (int i = 0; i < s.size(); i++)
            cout << a[i];
    } else {
        cout << "0\n";
    }
    return 0;
}
