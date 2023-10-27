#include<unistd.h>
/*
 * function main - the main function describes the main common in all c program
 *                 it acts as an entry point ,it returns 1 and recieve nothing
 *                 main - the main function
 * description :print a quote by using write function
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
