#include "main.h"
/**
 * clear_bit - limpiar bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: devuelve -1 sino funciona, devuelve 1 si funciona
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k = 1;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}

	k <<= index;
	*n &= ~k;
	return (1);
}
