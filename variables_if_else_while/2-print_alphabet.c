#include <stdio.h>
#include <ctype.h>
int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
	{
char small = tolower(x);
putchar(small);

}
putchar('\n');
return (0);
}
