#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int j;

/*Delacring FOR*/
for (j = 0; j < n; j++)
{
*(s + j) = b; /*add 1 position s*/

} /*END FOR*/

return (s);
}
