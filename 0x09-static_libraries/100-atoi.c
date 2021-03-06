#include "holberton.h"
#include <stdio.h>

/**
* _atoi - Funtion
* @s: string
* Return: int
*/
int _atoi(char *s)
{
	int exp = 1;
	int sign = 1;
	int iter;
	int pos;
	int exit = 0;
	const int length = 9;

	for (pos = length; pos >= 0; pos--)
	{
		if (*(s + pos) == '-' && exp > 1)
			sign *= -1;
		for (iter = 0; iter <= 9; iter++)
		{
			if (*(s + pos) == ('0' + iter))
			{
				if (
					((pos + 1) <= length)
					&& !(
						(*(s + (pos + 1)) >= '0')
						&& (*(s + (pos + 1)) <= '9')
					)
				)
				{
					exp = 1;
					exit = 0;
				}
				exit += (iter * exp);
				exp *= 10;
			}
		}
	}

	return ((exit * sign) + 0);
}
