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

	for (x = zero; x <= nine; x++)
	{
		putchar(x);

	}
	putchar('\n');
	return (0);
}
