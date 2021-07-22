#include "function_pointers.h"
/**
 * array_iterator - funtion pointer
 * @array: pointer int
 * @size: size_t
 * @action: character
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < (int)size; i++)
		action(*(array + i));
}
