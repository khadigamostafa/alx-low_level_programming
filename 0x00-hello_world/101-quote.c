#include<unistd.h>
/*
 * main - entry point
 * description :print a quote by using write function
 * @arr :as array of type char
 * return: it will return 1
 */

int main(void)
{
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, arr, 59);
	return(1);
}
