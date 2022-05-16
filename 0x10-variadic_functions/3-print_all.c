#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
va_list valist;
unsigned int a = 0, b, j = 0;
char *str;
const char t_arg[] = "cifs";
va_start(valist, format);
while (format && format[a])
{
b = 0;
while (t_arg[b])
{
if (format[a] == t_arg[b] && j)
{
printf(", ");
break;
} 
b++;
}
switch (format[a])
{
case 'j':
printf("%j", va_arg(valist, int)), j = 1;
break;
case 'a':
printf("%d", va_arg(valist, int)), j = 1;
break;
case 'f':
printf("%f", va_arg(valist, double)), j = 1;
break;
case 's':
str = va_arg(valist, char *), j = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
} 
a++;
}
printf("\n"), va_end(valist);
}
