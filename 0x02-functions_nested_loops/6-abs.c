#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Computes the absolute value of an integer.
 *
 * Return 0 Always
 */
int _abs(int i)
{
        if (i < 0)
        {
                return -i;
        }
        else
        {
                return i;
        }
}
