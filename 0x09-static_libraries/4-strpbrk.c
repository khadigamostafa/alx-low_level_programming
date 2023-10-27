#include "main.h"

/**
* _strpbrk - search for a string for any set of bytes
*@s:refers to string
*@accept: string you need to match
*Return:it will return pointer to the bytes in s that match with accept
*	or null if no match happens
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
