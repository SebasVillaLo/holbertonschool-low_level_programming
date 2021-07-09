#include <stdio.h>

/**
 * main - prints buffer in hexa
 * @argc: Character
 * @argv: Character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
