#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc : number of the argument
 * @argv: array contain the command line of the program
 * Return: it will return 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
