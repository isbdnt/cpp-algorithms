#include "insertion_sort.h"
#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int arr[] = { 3, 1, 7, 6, 0 };

	for (const int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	InsertionSort<int>(arr, 5);

	for (const int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	cin.get();

	return 0;
}