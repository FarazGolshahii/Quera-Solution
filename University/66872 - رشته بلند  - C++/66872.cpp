// In the name of GOD
// Created by: Faraz Golshahi
// Email: Faraz.golshahi8151@gmail.com
// Github: https://github.com/FarazGolshahii
// Question link: https://quera.org/problemset/66872/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int countFreq(string & pat, string & txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;

        if (j == M)
        {
           res++;
           j = 0;
        }
    }

    return res;
}

int main()
{
    int khobi = 0;
    int n;
    int cmd_count = 0;

    string str, cmd, a, b, c;
    cin >> str;

    while (true)
    {
        cin >> cmd;
        ++cmd_count;

        if (cmd == "copy")
        {
            cin >> a >> n;
            c.clear();
            while (n--)
            {
                c += a;
            }
            memcpy((void *) str.c_str(), c.c_str(), c.size());
        }
        else if (cmd == "compare")
        {
            cin >> a;
            khobi += (a == str);
        }
        else if (cmd == "substr")
        {
            cin >> a >> n;
            khobi += (n == countFreq(a, str));
        }
        else if (cmd == "attach")
        {
            cin >> a >> n >> b;
            a += b;
            khobi += (n == countFreq(a, str));
        }
        else if (cmd == "length")
        {
            cin >> n;
            khobi += (n == str.length());
        }
        else if (cmd == "Is")
        {
            cout << (khobi >= (cmd_count >> 1) ? "Eyval" : "HeifShod") << endl;
            break;
        }
    }

    return 0;
}