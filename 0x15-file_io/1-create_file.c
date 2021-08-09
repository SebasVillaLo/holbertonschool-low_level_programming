#include "main.h"
/**
 * create_file - crear un nuevo archivo
 * @filename: nombre del file
 * @text_content: contenido del texto
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int ar = 0, wf = 0, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	ar = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ar == -1)
	{
		return (-1);
	}
	if (!ar)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	write(ar, text_content, len);
	if (wf == -1)
	{
		return (-1);
	}

	close(ar);
	return (1);
}
