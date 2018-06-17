#pragma once
#include<iostream>

typedef void(*IntergerSortFunc)(int *, int);

static void TestIntergerSorting(IntergerSortFunc sortFunc)
{
	using namespace std;

	int failureCount = 0;
	for (int i = 0; i < 1000; i++)
	{
		int *array = new int[i];
		for (int j = 0; j < i; j++)
		{
			array[j] = rand() % 1000;
		}
		sortFunc(array, i);
		bool failed = false;
		for (int j = 0; j < i - 1; j++)
		{
			for (int k = j + 1; k < i; k++)
			{
				if (array[j] > array[k])
				{
					failed = true;
					break;
				}
			}
			if (failed)
			{
				failureCount++;
				break;
			}
		}
	}
	if (failureCount == 0)
	{
		cout << "All sortings succeed" << endl;
	}
	else
	{
		cout << "Soring failure count: " << failureCount << endl;
	}
}