#include "search_algos.h"

/**
 * binary_search - function that searches
 * for a value in an array of integers using the Linear search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: Always 0.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= r)
	{
		print_arr(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}

/**
 * print_arr - print array of the binary_search
 * @array: array
 * @l: left index of original array
 * @r: right index of original array
*/

void print_arr(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
