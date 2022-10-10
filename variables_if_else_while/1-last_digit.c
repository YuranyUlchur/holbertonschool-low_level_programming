#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ultimodigito;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultimodigito = n % 10;
	if (ultimodigito > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ultimodigito);
	else if (ultimodigito == 0)
		printf("Last digit of %d is %d and is 0\n", n, ultimodigito);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,
		ultimodigito);

	return (0);
}
