#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 *main- Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");

else if ((i % 3) == 0)

printf("Fizz ");

else if ((i % 5) == 0)

if (i < 100)
printf("Buzz ");
else
printf("Buzz");
else
printf("%i ", i);
}
putchar('\n');
return (0);
}
