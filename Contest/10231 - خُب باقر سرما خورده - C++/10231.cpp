// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

# include <iostream>

using namespace std;

int main() {

    bool not_found = true;

    for (int L = 1; L <= 5; L++) {
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 5; i < s.size(); i++) {
            if (s.substr(i - 5, 6) == "MOLANA")
                flag = true;
        }
        for (int i = 4; i < s.size(); i++) {
            if (s.substr(i - 4, 5) == "HAFEZ")
                flag = true;
        }
        if (flag) {
            not_found = false;
            cout << L << " ";
        }
    }
    if (not_found)
        cout << "NOT FOUND!\n";

    return 0;
}
