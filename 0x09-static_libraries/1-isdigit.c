#include "main.h"
/**
 * _isdigit - check if input is digit between 0 - 9
 * @c: input
 * Return: it will return 1 if c is digit and if it isnot  it will return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
