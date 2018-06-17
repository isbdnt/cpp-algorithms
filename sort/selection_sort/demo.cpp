#include "selection_sort.h"
#include<test_sorting.h>

int main(int argc, char **argv)
{
	TestIntergerSorting(&SelectionSort<int>);
	system("pause");
	return 0;
}