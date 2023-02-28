#include "main.h"

/**
 *_puts - check code
 *@str:argument
 * Return: Always 0
 */
int _puts(char *str)
{
	int c = 0;

	while(str[c] != '\0')
	{
		_putchar(str[i]);
		c++;
	}
	_putchar('\n');
	return (0);
}
