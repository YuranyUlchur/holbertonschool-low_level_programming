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
		if (x != 'Q' && x != 'E')
		{
		char small = tolower(x);

		putchar(small);
		}

	}
putchar('\n');
return (0);
}
