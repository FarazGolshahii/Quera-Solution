// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100007][3]={{0}};
ll Na, Nb;
ll A[200], B[200];
ll f(ll n, ll turn)
{
    if(dp[n][turn] != 0) return dp[n][turn];
    if(turn == 1)
    {
        if(n < A[0]) return dp[n][turn] = 2;
        for (int i=0; i<Na; i++)
        {
            if(n < A[i]) break;
            if(f(n - A[i],3 - turn) == 2) return dp[n][turn] = 2;
        }
        return dp[n][turn] = 1;
    }
    else
    {
        if(n < B[0]) return dp[n][turn] = 1;
        for (int i=0; i<Nb; i++)
        {
            if(n < B[i]) break;
            if(f(n - B[i],3 - turn) == 1) return dp[n][turn] = 1;
        }
        return dp[n][turn] = 2;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll Num;
    cin >> Num;
    cin >> Na;
    for (int i=0; i<Na; i++) cin >> A[i];
    cin >> Nb;
    for (int i=0; i<Nb; i++) cin >> B[i];
    sort(A,A + Na);
    sort(B,B + Nb);
    if(f(Num,1) == 1) cout<< "Charze";
    else cout << "Pashmak";
}
