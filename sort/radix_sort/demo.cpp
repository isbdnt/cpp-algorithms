#include "radix_sort.h"
#include<test_sorting.h>

int main(int argc, char** argv)
{
	TestIntergerSorting(&RadixSort<int>);
	system("pause");
	return 0;
}