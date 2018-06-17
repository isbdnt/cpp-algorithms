#pragma once

template<typename T>
static void ShellSort(T array[], int length)
{
	for (int gap = length / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < length; i += 1)
		{
			int temp = array[i];
			int j;
			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];
			array[j] = temp;
		}
	}
}