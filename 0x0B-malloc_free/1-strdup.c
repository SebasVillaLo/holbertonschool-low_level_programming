#include "holberton.h"
/**
 * _strdup - Funtion
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	if (i < 1)
		return (NULL);
	p = malloc(i * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
