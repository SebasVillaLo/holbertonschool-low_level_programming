#include "holberton.h"

/**
 * factorial - Prototipo para resolver el problema
 * @n: Character
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
