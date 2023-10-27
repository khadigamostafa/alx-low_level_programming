#include "main.h"

/**
*_isalpha  - is a function to check if character is lower case or upper
*@c :check input of function
 *Return: returns 1 if c is lowercase, otherwise is 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
