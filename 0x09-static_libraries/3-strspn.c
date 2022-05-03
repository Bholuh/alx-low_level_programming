#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
int a, b;
int count = 0;
char *str1, *str2;

str1 = s;
str2 = accept;

a = 0;
while (str1[a] != '\0') /*Declaring WHILE *s */
{
b = 0;
while (str2[b] != '\0') /*Declaring WHILE *accept*/
{
if (str2[b] == str1[a]) /*Evaluate condition*/
{
count++; /*count number*/
break;
}

b++;    /*add b+1*/
}

if (s[a] != accept[b]) /*If aren't equals*/
{
break;
}

a++; /*add x+1*/
}

return (count); /*return the value of count*/
}
