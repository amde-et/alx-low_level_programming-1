#include "main.h"
/**
 *print_square- size of squar
 *@size: int.
 *Return: if size 0 or lessthan 0 newline
 *else print #
 */
void print_square(int size)
{
int i, j;
char ch = '#';
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(ch);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
