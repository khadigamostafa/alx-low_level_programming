#include <stdlib.h>
#include <stdio.h>
/**
 * main - print minimum number of coins
 * @argc : number of the argument
 * @argv: array contain the command line of the program
 * Return: it will return 0 if success
 */
int main(int argc, char **argv)
{
	int cent,mincoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		if (cent >= 10)
			cent -= 10;
		if (cent >= 5)
			cent -= 5;
		if (cent >= 2)
			cent -= 2;
		if (cent >= 1)
			cent -= 1;
		mincoin += 1;
	}
	printf("%d\n", mincoin);
	return (0);
}
