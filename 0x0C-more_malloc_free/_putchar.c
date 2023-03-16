#include <unistd.h>

/**
 * _putchar - Entry point
 *@c:argument
 * Return: always 0 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
