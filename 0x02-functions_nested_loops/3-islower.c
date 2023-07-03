#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - checks for lowercase character
 *
 * Return 0 Always
 */
int _islower(int c)
{

        if (c >= 'a' && c <= 'z')
        {
                return 1;
        }
        return(0);
}
