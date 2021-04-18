#include "bubble_sort.h"
#include <test_sorting.h>

int main(int argc, char** argv)
{
	TestIntergerSorting(&BubbleSort<int>);
	system("pause");
	return 0;
}