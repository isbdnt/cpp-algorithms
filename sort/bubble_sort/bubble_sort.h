#pragma once

//O(n²)

template<typename T>
void Swap(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

template<typename T>
static void BubbleSort(T* array, int length)
{
	bool swapped;
	do
	{
		swapped = false;
		for (int i = 1; i < length; ++i)
		{
			if (array[i - 1] > array[i])
			{
				Swap(array[i - 1], array[i]);
				swapped = true;
			}
		}
		--length;
	} while (swapped);
}