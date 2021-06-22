#include "holberton.h"
/**
 * _abs - check the code for Holberton School students.
 * @n: character
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
