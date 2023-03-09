#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - check code
 *@s: argument
 * Return: Always void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
