// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

#define F first
#define S second
#define pb push_back
#define endl '\n'
#define all(o) o.begin(), o.end()
#define fori(i, a) for (int i = 0; i < (a); i++)
const int MAXN = 4e5 + 10;

int main()
{
    ios_base :: sync_with_stdio(false) ,cin.tie(0) , cout.tie(0);
    /////////////////////////////////////////////////////////////
    int n,i,a;
    cin>>n;
    fori(i,n)
    {
        cin>>a;
        if(a<=3)
        {
            fori(j,a){cout<<"*";}
            cout<<endl;
        }
        else cout<<"*"<<endl;
    }
    /////////////////////////////////////////////////////////////
    return 0;
}
