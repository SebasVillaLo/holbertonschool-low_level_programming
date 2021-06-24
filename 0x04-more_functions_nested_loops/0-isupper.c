#include "holberton.h"
/**
 * _isupper - Enter code
 * @i: Character
 * Return: 1
 */
int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (1);
	else
		return (0);
}

