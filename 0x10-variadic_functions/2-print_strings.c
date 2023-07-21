#include "variadic_functions.h"

/**
* print_strings - print strings, followed by a new line
* @n: number of strings to be printed
* @separator: separates strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str = NULL;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str)
		{
			printf("%s", str);
		}
		if (!str)
		{
			printf("(nil)");
		}
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(list);
}
