#include "merge_sort.h"
#include<test_sorting.h>

int main(int argc, char **argv)
{
	TestIntergerSorting(&MergeSort<int>);
	system("pause");
	return 0;
}