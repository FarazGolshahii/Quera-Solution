// In the name of GOD
// Created by: Faraz Golshahi
// Email: Faraz.golshahi8151@gmail.com
// Github: https://github.com/FarazGolshahii
// Question link: https://quera.org/problemset/277/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long long i, myi = 1, myb = 1, temp;
    long count = 0;
    string s;
    s.resize(20, 0);
    cin >> i;

    if (i == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    while (myi <= i)
    {
        myi = 0;
        s.clear();

        temp = myb;
        while (temp > 1)
        {
           s += '0' + (temp & 1);
           temp >>= 1;
        }

        s += '0' + temp;
        reverse(s.begin(), s.end());
        myi = stoll(s);
        ++count;
        ++myb;
    }

    cout << count - 1 << endl;

    return 0;
}