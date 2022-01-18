#include "search_algos.h"

/**
 * interpolation_search - function that searches
 * for a value in an array of integers using the Linear search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: Always 0.
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));

	if (array == NULL || size == 0)
			return (-1);

	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		size_t pos = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos ] < value)
		{
			low = pos + 1;
		}
		else if (value < array[pos ])
		{
			high = pos - 1;
		}
		else
		{
			return (pos);
		}
	}

	if (value == array[low])
	{
		return (low);
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
}
