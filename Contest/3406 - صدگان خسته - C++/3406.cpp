// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
#include <string>
using namespace std;
int main()
{   int n,m;
    string a,b;
    cin>>a>>b;
    n=a.size();
    m=b.size();
    if(a[n-1]>b[m-1]) cout<<b<<" < "<<a;
    if(a[n-1]<b[m-1]) cout<<a<<" < "<<b;
    if(a[n-1]==b[m-1])
    {
        if(a[n-2]>b[m-2]) cout<<b<<" < "<<a;
        if(a[n-2]<b[m-2]) cout<<a<<" < "<<b;
        if(a[n-2]==b[m-2])
        {
            if(a[n-3]>b[m-3]) cout<<b<<" < "<<a;
            if(a[n-3]<b[m-3]) cout<<a<<" < "<<b;
            if(a[n-3]==b[m-3]) cout<<b<<" = "<<a;
        }
    }
    return 0;
}
