#include "main.h"
/**
 *times_table - prints the 0-9 times table
 */

void times_table(void)
{
int filas;
int colum;
int c;

c = 0;

{
for (filas = 0; filas <= 9; filas++)
{
for (colum = 0; colum <= 9; colum++)
{

int operation;

operation = c *colum;

if (operation > 9)
{
_putchar(',');
_putchar(' ');
_putchar((operation / 10) + '0');
_putchar((operation % 10) + '0');
}
else if (colum == 0)
{
_putchar(operation + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(operation + '0');
}
}
c++;
_putchar('\n');
}
}
}
