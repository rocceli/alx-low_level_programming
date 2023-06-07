#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check code
 *@n:argumeny
 * Return: Always int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (-1);
	else
		return (check_prime(n, 3));
}

/**
 * check_prime - check if number greater than 3 is prime
 * @n: number
 * @a: counter
 *
 * Return: 0 or 1;
 */

int check_prime(int n, int a)
{
	if (n % a == 0 && a != n)
		return (0);
	else if (a > n)
		return (1);
	else
		return (check_prime(n, ++a));
}
