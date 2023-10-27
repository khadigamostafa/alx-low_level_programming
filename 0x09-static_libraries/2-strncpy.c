#include "main.h"

/**
* _strncpy -a function that copies a string
*@dest: pointer to the destination input buffer
*@src: pointer to the source input buffer
*@n: bytes of @src
*Return:it will return dest
*		and it is pointer to resulting string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
