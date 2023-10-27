#include<unistd.h>
/*
 *main - is the entry point of a program where the execution of a program start
 *the main function serves as the starting point for program execution.
 * write : is a function used to print
 * @arr :as array of type char
 * return: it will return 1
 */

int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, arr, 59);
	return (1);
}
