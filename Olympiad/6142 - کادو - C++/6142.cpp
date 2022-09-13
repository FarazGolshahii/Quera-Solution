// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
using namespace std;
const int MAX = 1000005;
int a[MAX], le[MAX], ri[MAX];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[mx] < a[i])
			mx = i;
		le[i] = mx;
	}
	mx = n - 1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[mx] < a[i])
			mx = i;
		ri[i] = mx;
	}
	string s;
	cin >> s;
	int cntl = 0, cntr = 0;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == 'L')
			cntl++;
		else
			cntr++;
	for (int i = 0; i < n; i++)
		cout << min(max(a[le[i]], a[ri[i]]), a[i] + min(cntl, a[le[i]] - a[i]) + min(cntr, a[ri[i]] - a[i])) << " ";
	cout << "\n";
	return 0;
}
