#include "holberton.h"

/**
* _islower - Funtion
* @c: char ascii in int
* Return: Always void
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
