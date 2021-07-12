#include "holberton.h"

/**
* _abs - Funtion
* @n: char
* Return: On success 1.
* On error, -1 is returned
*/
int _abs(int n)
{
	if (n < 0)
		return (-(n));
	return (n);
}
