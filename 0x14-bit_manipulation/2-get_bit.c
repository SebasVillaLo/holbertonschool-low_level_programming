#include "main.h"
/**
 * get_bit - obtener
 * @n: unsigned long int
 * @index: unsigned int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}

	n >>= index;
	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
