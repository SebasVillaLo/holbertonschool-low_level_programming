#include "holberton.h"
/**
 * *_strncat - check the code for Holberton School students.
 * @dest: character
 * @src: character
 * @n: character
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	for (k = 0; dest[k] != '\0'; k++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[k + i] = src[i];
		i++;
	}
	return (dest);
}
