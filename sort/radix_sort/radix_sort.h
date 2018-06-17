#pragma once

template<typename T>
T Max(int array[], int length)
{
	if (length <= 0)return 0;
	int max = array[0];
	for (int i = 1; i < length; i++)
	{
		if (max < array[i])
			max = array[i];
	}
	return max;
}

template<typename T>
static void RadixSort(T *array, int length)
{
	int maxValue = Max<T>(array, length);
	int *tmp = new int[length];
	int count[10];
	for (int i = 1; i <= maxValue; i *= 10)
	{
		int j, k;
		for (j = 0; j < 10; j++)
		{
			count[j] = 0;
		}
		for (j = 0; j < length; j++)
		{
			k = (array[j] / i) % 10;
			count[k]++;
		}
		for (j = 1; j < 10; j++)
		{
			count[j] = count[j - 1] + count[j];
		}
		for (j = length - 1; j >= 0; j--)
		{
			k = (array[j] / i) % 10;
			tmp[count[k] - 1] = array[j];
			count[k]--;
		}
		for (j = 0; j < length; j++)
		{
			array[j] = tmp[j];
		}
	}
	delete[] tmp;
}