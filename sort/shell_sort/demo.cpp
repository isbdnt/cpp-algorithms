#include "shell_sort.h"
#include<test_sorting.h>

int main(int argc, char **argv)
{
	TestIntergerSorting(&ShellSort<int>);
	system("pause");
	return 0;
}