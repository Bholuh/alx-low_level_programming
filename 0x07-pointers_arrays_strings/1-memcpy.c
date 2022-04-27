#include "main.h"
/**
 *_memcpy -   copy number bytes form address "from" to address "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int j;

j = 0;
while (j < n)  /*Delacring WHILE*/
{
*(dest + j) = *(src + j); /*add 1 position dest and src*/
j++;

} /*END WHILE*/


return (dest);
}
