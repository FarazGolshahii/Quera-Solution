// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 7;
const int INF = 1e9 + 7;

int d[N], dp[N], up[N];
vector<int> adj[N];
string ans;
pair<int, int> u[N];

void dfs_down(int v, int p)
{
	for (auto u : adj[v])
	{
		if (u == p)
			continue;
		dfs_down(u, v);
		dp[v] = max(dp[v], dp[u] + 1);
	}
}

void dfs_up(int v, int p)
{
	int mx1 = -1, mx2 = -1;
	for (auto u : adj[v])
	{
		if (u == p)
			continue;
		if (mx1 == -1 || dp[mx1] < dp[u])
			mx2 = mx1, mx1 = u;
		else if (mx2 == -1 || dp[mx2] < dp[u])
			mx2 = u;
	}
	for (auto u : adj[v])
	{
		if (u == p)
			continue;
		up[u] = max(up[u], up[v] + 1);
		if (u == mx1)
		{
			if (mx2 != -1)
				up[u] = max(up[u], dp[mx2] + 2);
		}
		else if (mx1 != -1)
			up[u] = max(up[u], dp[mx1] + 2);
		dfs_up(u, v);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	int n, q;
	cin >> n >> q;
	for (int i=0; i<n; i++)
		d[i] = INF;
	for (int i=1; i<n; i++)
	{
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i=0; i<q; i++)
	{
		int v, x;
		cin >> v >> x;
		v--;
		u[i] = {v, x};
		d[v] = min(d[v], x);
	}

	for (int i=0; i<n; i++)
		dp[i] = up[i] = -d[i];
	dfs_down(0, -1);
	dfs_up(0, -1);
	ans.resize(n);
	for (int i=0; i<n; i++)
		if (max(up[i], dp[i]) <= 0)
			ans[i] = '1';
		else
			ans[i] = '0';
	for (int i=0; i<n; i++)
		if (ans[i] == '1')
			dp[i] = up[i] = 0;
		else
			dp[i] = up[i] = -INF;
	dfs_down(0, -1);
	dfs_up(0, -1);
	for (int i=0; i<q; i++)
		if (max(dp[u[i].first], up[u[i].first]) != u[i].second)
		{
			cout << "-1\n";
			return 0;
		}
	cout << ans << "\n";
	return 0;
}

