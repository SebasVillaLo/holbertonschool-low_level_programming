#include "search_algos.h"

/**
 * jump_search - function that searches
 * for a value in an array of integers using the Linear search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: Always 0.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, left, right, i, min;

	if (array == NULL)
		return (-1);
	left = 0;
	step = sqrt(size);
	right = step;
	printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	while (right < size && array[left] < value)
	{
		if (array[right] >= value)
			break;
		left += step;
		right += step;
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);
	}
	if (left >= size || array[left] > value)
		return (-1);

	min = right < size ? right : size;
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i < min; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
