#include "main.h"
/**
 * append_text_to_file - add text in the end of text
 * @filename: nombre del file
 * @text_content: contenido
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ar = 0, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	ar = open(filename, O_APPEND | O_RDWR);
	if (ar == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		write(ar, text_content, len);
		if (!ar)
			return (-1);
	}

	close(ar);
	return (1);
}
}