#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of an array
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
int *start_d, *end_d d;
int e;

start_d = a;
end_d = a;

for (e = 0; e < n - 1; e++)
{
end_d++;
}

for (e = 0; e < n / 2; e++)
{

d = *end_c;
*end_d = *start_d;
*start_d = d;

star_d++;
end_d--;
}

}
