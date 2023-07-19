#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && 1)
	{
		f(name);
	}
}
