#include "holberton.h"

/**
 * check - Prototipo para resolver el problema
 * @n: Character
 * @base: Character
 * Return: Always 0
 */
int check(int n, int base)
{
	if (n * n > base)
		return (-1);
	if (n * n == base)
		return (n);
	return (check(n + 1, base));
}
/**
 * _sqrt_recursion - Prototipo para resolver el problema
 * @n: Character
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
