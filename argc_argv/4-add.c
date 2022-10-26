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
	int i;
	int suma = 0;

	for (i = 1; i < argc; i++)
	{
		suma += atoi(argv[i]);
		printf("%d", atoi(argv[i]));
	}
	printf("%d\n", suma);

	printf("Error\n");
	return (1);

	return (0);
}
