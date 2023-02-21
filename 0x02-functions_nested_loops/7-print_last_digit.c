#include "main.h"

/**
 * print_last_digit - Main programm function
 *@c: argument
 * Return: always 0 (Success)
 */
int print_last_digit(int c)
{
	if (c >= 0)
	{
		_putchar (c % 10 + '0');
		return (c % 10);
	}
	else
	{
		c = c * -1;
		_putchar (c % 10 + '0');
		return (c % 10);
	}
}

