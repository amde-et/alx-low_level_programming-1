#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 *main-Entry
 *@argc:int
 *@argv:char
 *Return:int
 */
int main(int argc, char *argv[])
{
int  mul;
if (argc > 1)
{
mul = atoi(argv[1]) * atoi( argv[2]);
printf("%d\n", mul);
}
else
printf("Error\n");
return (0);
}
