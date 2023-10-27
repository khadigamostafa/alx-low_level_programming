#include "main.h"

/**
* _abs - function that compute the absolute value of the integer
*@n: takes integer type  input for function print_sign
 *Return: return 0 (success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
