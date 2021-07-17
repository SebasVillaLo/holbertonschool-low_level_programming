#include "holberton.h"

/**
 * _calloc - Join in the program
 * @size: character
 * @nmemb: character
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;

	int long i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = malloc((nmemb * size));
	if (b == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i += 1)
		*(b + i) = 0;

	return ((void *)b);
}
