#include <stdlib.h>
#include <stdio.h>
/**
 * main - print minimum number of coins
 * @argc : number of the argument
 * @argv: array contain the command line of the program
 * Return: it will return 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, leastcents = 0, money = atoi(argv[1])
		int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cent[i])
			{
				leastcents += money / cent[i];
				money = money % cent[i];
				if (money % cent[i] == 0)
				break;
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
