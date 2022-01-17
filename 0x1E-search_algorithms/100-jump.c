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
	size_t jump_step = 0, j = 0, i = 0;

	if (array != NULL && size > 0)
	{
		jump_step = floor(sqrt(size));
		while (array[j] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			if (array[jump_step] < value && jump_step <= size)
			{
				j = jump_step;
				jump_step = jump_step + floor(sqrt(size));
			}
			else
			{
				printf("Value found between indexes [%ld] and [%ld]\n", j, j + 3);
				for (i = j; i < size ; i++)
				{
					printf("Value checked array[%ld] = [%d]\n", i, array[i]);
					if (array[i] == value)
					{
						return (i);
					}
					else if (array[j] > value || jump_step >= size)
					{
						return (-1);
					}
				}
			}
		}
	}
	return (-1);
}
