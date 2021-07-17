#include "holberton.h"

/**
 * malloc_checked - Join in the program
 * @b: character
 * Return: character
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = (void *)malloc(b);

	if (b <= 0)
		exit(98);

	if (k == NULL)
		exit(98);

	return (k);
}
