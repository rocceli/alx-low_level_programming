#include "main.h"

/**
 * print_to_98 - Main programm function
 *@c: argument
 * Return: always  (Success)
 */
void print_to_98(int c)
{
	int x;

	if (c < 0)
		c = c * -1;
	if (c <= 98)
	{
		for (x = c; c <= 98; x++)
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (c >= 98)
	{
		for (x = c; c >= 98; x--)
		{
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}

