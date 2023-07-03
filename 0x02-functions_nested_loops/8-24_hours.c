#include <stdio.h>
#include "main.h"

/**
 * main - Prints every minute of the day of Jack Bauer, 00:00 to 23:59
 *
 * Return 0 Always
 */
void jack_bauer(void)
{
         int hour, min;
         for (hour = 0; hour < 24; hour++)
         {
                 for (min = 0; min < 60; min++)
                 {
                         putchar((hour / 10) + 48);
                         putchar((hour % 10) + 48);
                         putchar(':');
                         putchar((min / 10) + 48);
                         putchar((min % 10) + 48);
                         putchar('\n');
                 }
         }
         return;
}
