#include "main.h"

/**
* _memset - fills memory with a constant byte
*@s: pointer to put the constant
*@b: constant
*@n: maximum bytes you can use
*Return:it will return pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; n > 0; c++, n--)
		s[c] = b;
	return (s);
}
