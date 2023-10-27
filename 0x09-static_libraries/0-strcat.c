#include "main.h"

/**
* _strcat - function that concatenates two strings
*@dest: pointer to the destination
*@src: pointer to the source
*Return:it will return dest
*		and it is pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];
	return (dest);
}
