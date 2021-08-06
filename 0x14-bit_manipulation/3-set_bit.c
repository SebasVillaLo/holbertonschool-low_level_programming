#include "main.h"
/**
 * set_bit - Poner bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: -1 si falla, 1 si funciona
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k = 1;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}

k <<= index;
*n |= k;
return (1);
}
