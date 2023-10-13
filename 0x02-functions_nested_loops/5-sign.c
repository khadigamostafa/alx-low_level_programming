#include "main.h"

/**
* print_sign  - print + if n>0
*               print - if n<0
*               print 0 if n==0
*@n: takes integer type  input for function print_sign
 *Return: returns 1 if positive ,0 if zero, -1 if negative
 */
int print_sign(int n)
{
        if (n > 0)
        {
                _putchar(43);
                return (1);
        }
        else if (n == 0)
        {
                _putchar(48);
                return (0);
        }
        else
        {       _putchar(45);
                return (-1);
        }
}
