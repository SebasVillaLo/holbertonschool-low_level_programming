#include "holberton.h"
/**
 * str_concat - Funtion
 * @s1: char
 * @s2: char
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int one, two, sizeBuffer, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (one = 0; s1[one]; one++)
		;
	for (two = 0; s2[two]; two++)
		;
	sizeBuffer = one + two + 1;
	p = malloc(sizeBuffer * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < sizeBuffer; i++)
		i < one ? (p[i] = s1[i]) : (p[i] = s2[i - one]);
	return (p);
}
