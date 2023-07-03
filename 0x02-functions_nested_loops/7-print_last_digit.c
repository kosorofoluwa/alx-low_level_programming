#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the last digit of a number.
 *
 * Return 0 Always
 */
int print_last_digit(int i)
{
        if (i < 0)
        {
                i *= -1;
        }
        _putchar((i % 10) + 48);
        return(i % 10);
}
