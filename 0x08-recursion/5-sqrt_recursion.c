#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check code
 *@n:argument
 * Return: Always int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_sqrt(n, 1));
}
/**
 * get_sqrt - get square root of a number recursively
 * @n: number
 * @c: possible square root
 *
 * Return: square root or -1
 */

int get_sqrt(int n, int c)
{
	if (c * c == n)
		return (c);
	else if (c > n / 2)
		return (-1);
	else
		return (get_sqrt(n, ++c));
}
