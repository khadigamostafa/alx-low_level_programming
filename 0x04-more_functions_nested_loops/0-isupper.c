#include "main.h"
/**
 * _isupper - check if input is upper
 * @c: input
 * Return: it will return 1 if c is upper and if it isnot  it will return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
