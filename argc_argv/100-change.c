#include <stdio.h>
#include "main.h"
/**
 *main- function argc argv
 *@argc: varible argc, argv
 *@argv: variable argc, argv
 *Return: zero
 */
int main(int argc, char *argv[])
{
	char coin[] = {25, 10, 5, 2, 1};
	int n = 0;
	int cont = 0;
	int result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]);

	if (result <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; coin[n] != '\0'; n++)
	{
		if (coin[n] > result)
		{
			continue;
		}

		while (coin[n] <= result)
		{
			result = result - coin[n];
			cont++;
		}
	}

	printf("%d\n", cont);
	return (0);
}
