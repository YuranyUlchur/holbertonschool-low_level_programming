#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int zero = 48;
	int nine = 57;
	int letraa = 97;
	int letraf = 102;

	for (x = zero; x <= nine; x++)
	{
		putchar(x);

	}
	for (x = letraa; x <= letraf; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
