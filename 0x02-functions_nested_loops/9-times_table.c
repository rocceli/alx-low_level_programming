#include "main.h"

/**
 * times_table - Main programm function
 *
 * Return: always 0 (Success)
 */
void times_table(void)
{
	int x, i;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 10 ; i++)
		{
			int s;

			s = i * x;
			_putchar(s + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar ('\n');
	}
}

