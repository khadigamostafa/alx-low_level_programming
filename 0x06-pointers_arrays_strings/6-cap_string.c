#include "main.h"
#include <stdio.h>

/**
* isLower - function to determine if the ascii is lowercase
*@c: character
*Return:it will return 1 if true
*			or zero if false
*/

int isLower(char c)
{
return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - determine if ascii is a delimiter
 * @c: character
 * Return: 1 if true , zero if false
 */

	int isDelimiter(char c)
	{
		int i;
	char delmiter[] = " \t\n,.!?\" ()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
	}
/**
* cap_string - capitalise all words of a string
* @s: input string
* Return: string with capitalized word
*/

char *cap_string(char *s)
{
char *ptr = s;
int foundDelimit = 1;

while (*s)
{
if (is Deimiter(*s))
foundDelimit = 1;
else if (isLower(*s) && foundDelimit)
{
*s -= 32;
foundDelimit = 0;
}
else
foundDelimit = 0;
s++;
}
return (ptr);
}
