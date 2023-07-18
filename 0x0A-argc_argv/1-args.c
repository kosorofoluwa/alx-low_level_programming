#include <stdio.h>

/**
 * main - prints the number of argument passed into it
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 always
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
