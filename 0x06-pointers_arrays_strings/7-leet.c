#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer dest.
 */

char *leet(char *s)
{
int count = 0, j;
int lower_case[] = {97, 101, 111, 116, 108};
int upper_case[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};


while (*(s + count) != '\0')
{
for (j = 0; j < 5; j++)
{
if (*(s + count) == lower_case[j] || *(s + count) == upper_case[j])
{
*(s + count) = numbers[j];
break;
}
}
count++;
}

return (s);
}
