#include "main.h"
/**
 * _puts_recursion: prints a string THEN PRINT NEW LINE
 * @s : refers to pointer of string
*/
void _puts_recursion(char *s)
{
	if (*s != '/0')
	{
		_putchar(*s);
		Puts_recursion(1 + s);
	}
	else
		_putchar('\n');
}
