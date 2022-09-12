// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>

using namespace std;

int main() {
    float n, m, s;
    cin >> n >> m;
    m = m * m;
    s = n / m;
    cout << std::fixed;
    cout.precision(2);
    cout << s << endl;
    if (s < 18.5)
        cout << "Underweight";
    else if (s >= 18.5 && s < 25)
        cout << "Normal";
    else if (s >= 25 && s < 30)
        cout << "Overweight";
    else if (s >= 30)
        cout << "Obese";
    return 0;
}
