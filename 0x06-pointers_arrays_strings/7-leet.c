#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *leet-chenge the mode
 *@s:char
 *Return:char
 */
char *leet(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == 'a' || s[i]  == 'A')
s[i] = '4';
if (s[i] == 'e' || s[i]  == 'E')
s[i] = '3';
if (s[i] == 'o' || s[i]  == 'O')
s[i] = '0';
if (s[i] == 'l' || s[i]  == 'L')
s[i] = '1';
i++;
}
return (s);
}
