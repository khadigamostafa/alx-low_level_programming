#include "main.h"

/**
 *_is lower  - function check if character is lower case
 * @c :chechs input of function
 *Return: returns 1 if c is lowercase, otherwise is 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
