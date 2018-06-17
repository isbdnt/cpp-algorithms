#include "quick_sort.h"
#include<test_sorting.h>

int main(int argc, char **argv)
{
	TestIntergerSorting(&QuickSort<int>);
	system("pause");
	return 0;
}