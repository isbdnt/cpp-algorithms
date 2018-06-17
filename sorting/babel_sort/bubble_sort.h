#pragma once

template<typename T>
void Swap(T& a, T& b)
{
	T temp(a);
	a = b;
	b = temp;
}

template<typename T>
void BubbleSort(T arr[], int length)
{
	bool swapped;

	do
	{
		swapped = false;
		for (int i = 1; i < length; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				Swap(arr[i - 1], arr[i]);
				swapped = true;
			}
		}
		length--;
	} while (swapped);
}