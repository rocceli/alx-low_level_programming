#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - check code
 *@s: argument
 * Return: Always void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
