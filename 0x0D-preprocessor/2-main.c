#include <stdio.h>

/**
 * main - prints the name of the file from which it was compiled
 *
 * Return 0 always
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
