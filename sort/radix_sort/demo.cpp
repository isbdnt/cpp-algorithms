#include "radix_sort.h"
#include<iostream>

using namespace std;

int main(int argc, char **argv)
{
	int arr[] = { 3, 1, 7, 6, 0, 2, 2, 9, 341, 322 };

	for (const int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	RadixSort<int>(arr, 10);

	for (const int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	cin.get();

	return 0;
}