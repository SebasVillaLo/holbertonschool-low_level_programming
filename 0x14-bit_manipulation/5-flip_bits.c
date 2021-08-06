#include "main.h"
/**
 * flip_bits - poner en 0 el bit determinado
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: numero de bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j;
	int i = 0;

	j = n ^ m;
	while (j >= 1)
	{
		if ((j & 1) == 1)
		{
			i++;
			j >>= 1;
		}
	}
	return (i);
}
