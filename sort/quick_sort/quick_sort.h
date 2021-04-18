#pragma once

//O(nlogn)

template<typename T>
void Swap(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

template<typename T>
static int Partition(T* array, int begin, int end)
{
	Swap(array[begin], array[rand() % (end - begin) + begin]);
	int pivot = array[begin];
	int i = begin + 1;
	int j = end - 1;

	while (i <= j)
	{
		while ((i < end) && (array[i] <= pivot))
			i++;
		while ((j > begin) && (array[j] > pivot))
			j--;
		if (i < j)
		{
			Swap(array[i], array[j]);
			i++; j--;
		}
	}
	if (j > begin)
		Swap(array[begin], array[j]);
	return j;
}

template<typename T>
static void QuickSortInternal(T* array, int begin, int end)
{
	if (end - begin < 2) return;
	int pivotIndex = Partition(array, begin, end);
	QuickSortInternal(array, begin, pivotIndex);
	QuickSortInternal(array, pivotIndex + 1, end);
}

template<typename T>
static void QuickSort(T* array, int length)
{
	QuickSortInternal(array, 0, length);
}