#include "main.h"
/**
 * binary_to_uint - Convert binary a int
 * @b: const char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	int i = 0, bs = 1;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i + 1])
	{
		if (b[i] != '\0' && b[1] != '1')
		{
			return (0);
		}
		i++;
	}
	while (i >= 0)
	{
		r = r + ((b[i] - '0') * bs);
		bs = bs * 2;
		i--;
	}
	return (r);
}
