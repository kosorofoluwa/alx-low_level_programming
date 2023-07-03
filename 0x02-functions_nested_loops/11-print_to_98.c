#include <stdio.h>
#include "main.h"

/**
 * main - Prints all natural numbers from n to 98, followed by a new line
 *
 * Always return 0
 */
void print_to_98(int n)
{
        int i;
        for (i = n; i <= 98; i++)
        {
                if (i < 98)
                {
                        _putchar(i + '0');
                        _putchar(',');
                }
        }
        return;
}
