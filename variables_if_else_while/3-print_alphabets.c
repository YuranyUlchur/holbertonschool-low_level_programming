#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char small = tolower(x);

		putchar(small);
	}

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
