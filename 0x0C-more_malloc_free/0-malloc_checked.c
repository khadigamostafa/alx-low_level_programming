#include "main.h"

/**
* *malloc_checked - allocates memory using malloc and if it fails it will exit
*@b: int
* Return: pointer to the array initialized
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
