#include "holberton.h"

/**
 * string_nconcat - Join in the program
 * @s1: character
 * @s2: character
 * @sn: character
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int z1, z2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[z1] != '\0')
	{
		z1++;
	}

	while (s2[z2] != '\0')
	{
		z2++;
	}

	if (n > z2)
		n = z2;
	k = malloc((z1 + n + 1) * sizeof(char));

	if (k == NULL)
		return (0);

	for (i = 0; i < z1; i++)
	{
		k[i] = s1[i];
	}

	for (; i < (z1 + n); i++)
	{
		k[i] = s2[i - z1];
	}
	k[i] = '\0';

	return (k);
}
