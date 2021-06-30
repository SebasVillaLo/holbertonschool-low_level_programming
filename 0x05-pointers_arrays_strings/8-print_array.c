#include "holberton.h"
#include <stdio.h>
/**
* print_array - check the code for Holberton School students.
* @a: Character
* @n: Character
* Return: Always 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (*(a) != 0)
			printf("%d", *(a++));
		else
			break;
		if (i < (n - 1) && *(a) != 0)
			printf(", ");
	}
	printf("\n");
}
