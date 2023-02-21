#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned int c;
	char message[] = "_putchar";

	for (c = 0; c < sizeof(message); c++)
	{
		if (message[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
			_putchar(message[c]);
	}
	return (0);
}
