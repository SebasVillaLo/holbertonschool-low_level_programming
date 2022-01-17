#include "search_algos.h"

/**
 * linear_search - function that searches
 * for a value in an array of integers using the Linear search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: Always 0.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size == 0 || array == NULL)
		return (-1);

	for (i = 0; i < size ; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
