#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc : number of the argument
 * @argv: array contain the command line of the program
 * Return: it will return 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
