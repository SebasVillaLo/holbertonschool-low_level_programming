#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entrada al codigo
 * @argc: Character
 * @argv: Caracter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, i, j = 0;

	for (n = 1; n < argc; n++)
	{
		for (i = 0; argv[n][i]; i++)
		{
			if (argv[n][i] < '0' || argv[n][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		j += atoi(argv[n]);
	}

	printf("%d\n", j);

	return (0);
}
