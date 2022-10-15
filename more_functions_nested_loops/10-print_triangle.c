#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size is size the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int c;
	int f;
	int x = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = 0; f < size; f++)
		{
			x--;
			for (c = 0; c < size; c++)
			{
				if (c < x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
