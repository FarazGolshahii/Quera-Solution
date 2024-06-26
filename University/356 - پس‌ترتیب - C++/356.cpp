// In the name of GOD
// Created by: Faraz Golshahi
// Email: Faraz.golshahi8151@gmail.com
// Github: https://github.com/FarazGolshahii
// Question link: https://quera.org/problemset/356/

#include <iostream>
using namespace std;
#define int int
int in[1000000];// = { 4, 2, 5, 1, 3, 6 };
int pre[1000000];// = { 1, 2, 4, 5, 3, 6 };

// A utility function to search x in arr[] of size n
int search(int arr[], int x, int n)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Prints postorder traversal from given inorder and preorder traversals
void printPostOrder(int in[], int pre[], int n)
{
	// The first element in pre[] is always root, search it
	// in in[] to find left and right subtrees
	int root = search(in, pre[0], n);

	// If left subtree is not empty, print left subtree
	if (root != 0)
		printPostOrder(in, pre + 1, root);

	// If right subtree is not empty, print right subtree
	if (root != n - 1)
		printPostOrder(in + root + 1, pre + root + 1, n - root - 1);

	// Print root
	cout << pre[0] << " ";
}

// Driver program to test above functions
int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> in[i];
	for (int i = 0;i < n;i++)
		cin >> pre[i];
	printPostOrder(in, pre, n);
}