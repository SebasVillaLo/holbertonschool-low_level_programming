#include "function_pointers.h"
/**
 * print_name - entrada de la funcion
 * @name: el nombre
 * @f: character
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
