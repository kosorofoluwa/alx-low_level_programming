#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: arguement count
 * @argv: argument vector
 *
 * Return: 0 always
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
