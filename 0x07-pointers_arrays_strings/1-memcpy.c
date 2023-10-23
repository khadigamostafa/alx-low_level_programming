#include "main.h"

/**
* _memcpy - copy memory area
*@dest: memory area
*@src: source
*@n: length of src you  will copy
*Return:it will return pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
