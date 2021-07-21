#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - entrada de la funcion
 * @name: el nombre
 * @f: character
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
