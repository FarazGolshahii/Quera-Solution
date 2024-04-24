// In the name of GOD
// Created by: Faraz Golshahi
// Email: Faraz.golshahi8151@gmail.com
// Github: https://github.com/FarazGolshahii
// Question link: https://quera.org/problemset/282/

#include <iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(s==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
