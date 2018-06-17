#pragma once

template<typename T>
static void InsertionSort(T *array, int length)
{
	for (int i = 1; i < length; i++)
	{
		T current = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > current)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = current;
	}
}