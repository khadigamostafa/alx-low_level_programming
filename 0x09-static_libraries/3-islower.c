#include "main.h"

/**
*_islower  - is a function to check if character is lower case or not
*@c :check input of function
 *Return: returns 1 if c is lowercase, otherwise is 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
