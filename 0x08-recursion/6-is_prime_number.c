#include "holberton.h"

/**
 * check - Prototipo para resolver el problema
 * @n: Character
 * @base: Character
 * Return: Always 0
 */
int check(int n, int base)
{
	if (n == base - 1)
		return (1);
	else if (base % n == 0 || base < 2)
		return (0);
	else if (base > n)
		return (check(n + 1, base));
	return (1);
}
/**
 * is_prime_number - Prototipo para resolver el problema
 * @n: Character
 * Return: Always 0
 */
int is_prime_number(int n)
{
	return (check(2, n));
}
