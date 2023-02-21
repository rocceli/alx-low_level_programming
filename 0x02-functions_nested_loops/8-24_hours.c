#include "main.h"

/**
 * jack_bauer - Main programm function
 *
 * Return: always void (Success)
 */
void jack_bauer(void)
{
	int h = 0, m = 0, h_r, m_r;

	while (h < 24)
	{
		while (m < 60)
		{
			m_r = m % 10;
			h_r = h % 10;
			_putchar(h / 10 + '0');
			_putchar(h_r + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m_r + '0');
			m++;
			_putchar('\n');
		}
		h++;
		m = 0;
	}
}

