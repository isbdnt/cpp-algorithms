#include "insertion_sort.h"
#include <test_sorting.h>

int main(int argc, char** argv)
{
	TestIntergerSorting(&InsertionSort<int>);
	system("pause");
	return 0;
}