#include "main.h"

/**
* _strchr - fills memory with constant byte
*@s: pointer to put the constant
*@c: constant
*Return:it will return pointer to s
*/

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
