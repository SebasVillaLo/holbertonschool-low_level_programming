#include "variadic_functions.h"

/**
 * sum_them_all - funcion
 * @n: variable
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum;

	va_start(arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}
