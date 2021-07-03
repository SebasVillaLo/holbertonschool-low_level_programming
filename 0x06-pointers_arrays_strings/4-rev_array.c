#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: character
 * @n: character
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp =  0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
