#include "main.h"
/**
 *void print_triangle-the hash
 *return:the hash
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for(i = 1; i <= size; i++)
{
for(j = i; j < size; j++)
{
_putchar(' ');
}
for(j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
