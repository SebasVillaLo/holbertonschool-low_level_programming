#include "main.h"

/**
 * copy_file - copia los archivos al destino
 * @ar1: argumento 1
 * @ar2: argumento 2
 */
void copy_file(const char *ar1, const char *ar2)
{
	int of, nf, rd;
	char bug[1024];

	of = open(ar1, O_RDONLY);
	if (!ar1 || of == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ar1);
		exit(98);
	}
	nf = open(ar2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd == read(of, buf, 1024)) > 0)
	{
		if (write(nf, buf, rd) != rd || nf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (close(of) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}
	if (close(t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", t);
		exit(100);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
}
/**
 * main - main de copia
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}
