#include "main.h"
#include <stdio.h>
/**
 *main- Entry point
 *@argc: value integer
 *@argv: pointers char
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int oneinteger;
	int twointeger;

	if (argc == 3)
	{
		oneinteger = atoi(argv[1]);
		twointeger = atoi(argv[2]);

		printf("%d\n", oneinteger * twointeger);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
