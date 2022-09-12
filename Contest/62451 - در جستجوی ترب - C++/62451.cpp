// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com
#include <bits/stdc++.h>
using namespace std;
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
vector<char> removeDupWord(string str)
{
    vector<char> res;
    for (auto x : str)
    {
        res.push_back(x);
    }
    return res;
}
int main() {
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(x2>x1){
        if(v1>v2){
            cout<<"SEE YOU";
            return 0;
        }
        if(v1==v2){
            cout<<"WAIT WAIT";
            return 0;
        }
        if(v1<v2){
            cout<<"BORO BORO";
            return 0;
        }
    }
    if(x1>x2){
        if(v1<v2){
            cout<<"SEE YOU";
            return 0;
        }
        if(v1==v2){
            cout<<"WAIT WAIT";
            return 0;
        }
        if(v1>v2){
            cout<<"BORO BORO";
            return 0;
        }
    }
    if(x1==x2){
        cout<<"BORO BORO";
        return 0;
    }
}
