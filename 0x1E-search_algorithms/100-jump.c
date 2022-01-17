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
	size_t jump_step = 0, prev = 0, i;

	jump_step = floor(sqrt(size));

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[jump_step] < value && jump_step <= size)
		{
			prev = jump_step;
			jump_step = jump_step + floor(sqrt(size));
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, prev + 3);
			for (i = prev; i < size ; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
				else if (array[prev] > value || jump_step >= size)
				{
					return (-1);
				}
			}
		}
	}
	return (-1);
}
