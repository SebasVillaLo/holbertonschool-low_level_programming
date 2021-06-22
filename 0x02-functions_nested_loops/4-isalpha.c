#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @c: character
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c <  123))
		return (1);
	else
		return (0);
}
