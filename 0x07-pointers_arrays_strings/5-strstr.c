#include <stdio.h>
#include "main.h"

/**
*_strstr - entry point
*@haystack:refers to input
*@needle : refers to input
*Return:it will return 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *num1 = haystack;
		char *num2 = needle;

		while (*num1 == *num2 && *num2 != '\0')
		{
			num1++;
			num2++;
		}
		if (*num2 == '\0')
			return (haystack);
	}
	return (null);
}
