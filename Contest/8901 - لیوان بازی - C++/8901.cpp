// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, L = 0, M = 0, R = 0;
    string b, n1, n2;
    cin >> a >> b;
    if (b == "L") { L++; }
    else if (b == "M") { M++; }
    else if (b == "R") { R++; }
    for (int i = 0; i < a; i++) {
        cin >> n1 >> n2;
        if (n1 == "L" && n2 == "M")swap(L, M);
        else if (n1 == "M" && n2 == "L")swap(M, L);
        else if (n1 == "L" && n2 == "R")swap(L, R);
        else if (n1 == "R" && n2 == "L")swap(R, L);
        else if (n1 == "R" && n2 == "M")swap(R, M);
        else if (n1 == "M" && n2 == "R")swap(M, R);
    }
    if (M == 1)cout << "M";
    if (L == 1)cout << "L";
    if (R == 1)cout << "R";
    return 0;
}
