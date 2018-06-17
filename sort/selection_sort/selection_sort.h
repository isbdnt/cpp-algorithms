#pragma once

template<typename T>
void Swap(T &a, T &b)
{
	T temp(a);
	a = b;
	b = temp;
}

template<typename T>
static void SelectionSort(T *array, int length)
{
	for (int i = 0; i < length; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < length; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		if (minIndex != i)
		{
			Swap(array[i], array[minIndex]);
		}
	}
}