#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the aguments it receives per line followed by a new line
 * @argc: counts the arguments
 * @argv: argument vector (strings)
 *
 * Return: EXIT SUCCESS
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
