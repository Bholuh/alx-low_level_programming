#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
/*Declaring variables*/
int a, b;

a = 0;
while (a < 8) /*number repetitions*/
{
b = 0;
while (b < 8)
{
_putchar (i[a][b]);
b++;
}
_putchar ('\n'); /*print new line*/
a++; /*add +1*/
}

}
