#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c : The charactyerto print
 *
 * Return: on success 1.
 * Error -1 is returned
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}