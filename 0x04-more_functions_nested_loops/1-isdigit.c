#include "holberton.h"
/**
 * _isdigit - Enter code
 * @i: Character
 * Return: 1
 */
int _isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}
