// In the name of GOD
// Created by: Faraz Golshahi
// Contact: info@farazgolshahi.com

#include <iostream>
using namespace std;

int Water(short arr[], long n)
{
	int result = 0;

	int left_max = 0, right_max = 0;

	long l = 0, h = n - 1;
	while(l <= h)
	{
		if (arr[l] < arr[h])
		{
			if (arr[l] > left_max)
				left_max = arr[l];
			else
				result += left_max - arr[l];
			l++;
		}
		else
		{
			if (arr[h] > right_max)
				right_max = arr[h];
			else
				result += right_max - arr[h];
			h--;
		}
	}
	return result;
}

int main()
{
	long n;
	cin >> n;
	short *arr = new short[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	cout << Water(arr, n);
	return 0;
}
