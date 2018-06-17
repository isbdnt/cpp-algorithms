#include "bubble_sort.h"
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int arr[] = { 3, 1, 7, 6, };

	for (const int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	BubbleSort<int>(arr, 4);

	for (const int num : arr)
	{
		cout << num << " ";
	}
	cout << endl;

	cin.get();

	return 0;
}