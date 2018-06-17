#pragma once

template<typename T>
void CopyArray(T *source, int begin, int end, T *dest)
{
	for (int i = begin; i < end; i++)
		dest[i] = source[i];
}

template<typename T>
static void Merge(T *array, int begin, int middle, int end, T *tempArray)
{
	for (int i = begin, j = middle, k = begin; k < end; k++)
	{
		if (i < middle && (j >= end || tempArray[i] <= tempArray[j]))
		{
			array[k] = tempArray[i];
			i++;
		}
		else
		{
			array[k] = tempArray[j];
			j++;
		}
	}
}

template<typename T>
static void MergeSortInternal(T *array, int begin, int end, T *tempArray)
{
	if (end - begin < 2) return;
	int middle = (end + begin) / 2;
	MergeSortInternal(tempArray, begin, middle, array);
	MergeSortInternal(tempArray, middle, end, array);
	Merge(array, begin, middle, end, tempArray);
}

template<typename T>
static void MergeSort(T *array, int length)
{
	T *tempArray = new int[length];
	CopyArray(array, 0, length, tempArray);
	MergeSortInternal(array, 0, length, tempArray);
}