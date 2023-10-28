#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc : number of the argument
 * @argv: array contain the command line of the program
 * Return: it will return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
