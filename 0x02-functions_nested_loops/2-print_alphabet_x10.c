#include "main.h"

/**
 * print_alphabet_x10 - Entry function
 *
 * Return: void
 */
void  print_alphabet_x10(void)
{
	int c, i;

	for (c = 0; c < 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
