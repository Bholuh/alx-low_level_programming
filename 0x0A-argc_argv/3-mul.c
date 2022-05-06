#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, j, r;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
i = atoi(argv[1]);
j = atoi(argv[2]);
r = i *j;
printf("%d\n", r);
return (0);
}
