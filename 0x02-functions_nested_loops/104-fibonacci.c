#include <stdio.h>
/**
 *main - print first 98 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
long int i, x = 1, y = 2, sum = 0;

for (i = 0; i < 98; i++)
{
printf("%lu, ", x);
 printf("%lu, ", y);
sum = x + y;
x = sum - x;
y = sum;

if (i == 97)
printf("%lu\n", x);
}
return (0);
}
