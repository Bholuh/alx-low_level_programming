#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99. seperated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <=98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putcher((num1 / 10) + '0');
putcher((num1 % 10) + '0');
putcher(' ');
putcher((num2 / 10) + '0');
putcher((num2 % 10) + '0');

if (num1 == 98 && num2 == 99)
continue;

putcher(',');
putcher(' ');
}
}

putcher('\n');

return (0);
}
