#include <stdio.h>
#include <stdlib.h>
/**
 *main-Entry point
 *@argc:int
 *@argv:char
 *Return:int
 */
int main(int argc, char *argv[])
{
int i, j, k, num;
int sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}
for (k = 1; k < argc; k++)
{
num = atoi(argv[k]);
if (num >= 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
