#include "main.h"
#include <stdio.h>

/**
 * _memset - check code
 *@s:argument
 *@b:argument
 *@n:argument
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; n > 0; c++, n--)
		s[c] = b;
	return (s);
}
