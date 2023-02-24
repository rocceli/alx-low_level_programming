#include <stdio.h>

/**
 * natural - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 * Return: Always 0.
 */
int natural(void)
{
	int m, n;

	for (m = 1; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
			n += m;
	}
	printf("%d\n", n);
	return (0);
}
