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
    int n;
    cin >> n;
    cout << "########.......########" << endl;
    if (n == 0) {
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
    }
    if (n == 1) {
        cout << "#ghorfe1..............#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
    }
    if (n == 2) {
        cout << "#ghorfe1.......ghorfe2#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
    }
    if (n == 3) {
        cout << "#ghorfe1.......ghorfe2#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe3..............#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
    }
    if (n == 4) {
        cout << "#ghorfe1.......ghorfe2#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe3.......ghorfe4#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
    }
    if (n == 5) {
        cout << "#ghorfe1.......ghorfe2#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe3.......ghorfe4#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe5..............#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
    }
    if (n == 6) {
        cout << "#ghorfe1.......ghorfe2#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe3.......ghorfe4#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe5.......ghorfe6#" << endl;
        cout << "########.......########" << endl;
        cout << "#.....................#" << endl;
    }
    if (n == 7) {
        cout << "#ghorfe1.......ghorfe2#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe3.......ghorfe4#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe5.......ghorfe6#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe7..............#" << endl;
    }
    if (n == 8) {
        cout << "#ghorfe1.......ghorfe2#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe3.......ghorfe4#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe5.......ghorfe6#" << endl;
        cout << "########.......########" << endl;
        cout << "#ghorfe7.......ghorfe8#" << endl;
    }
    cout << "#######################" << endl;
}
