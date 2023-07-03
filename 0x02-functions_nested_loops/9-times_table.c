#include <stdio.h>
#include "main.h"

/**
 * main - Prints the 9 times table starting with 0.
 *
 * Return 0 Always
 */
void times_table(void)
{
        int i, j, product;

        for (i = 0; i <= 9; i++)
        {
                for (j = 0; j <= 9; j++)
                {
                        product = i * j;
                                if (i <= 9 || j < 9)
                                {
                                        _putchar(product / 10 + '0');
                                        _putchar(product  % 10 + '0');
                                        _putchar(',');
                                        _putchar(' ');

                                }                               }

                }
        }
        _putchar('\n');
        return;
}
