#include "main.h"
/**
 *jack_bauer-count down 24hrs
 *Return: void.
 */
void jack_bauer(void)
{
int hou, min;
for (hou = 0; hou <= 23; hou++)
{
for (min = 0; min <= 59; min++)
{
_putchar('0' + (hou / 10));
_putchar('0' + (hou % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
_putchar('\n');
}
}
}
