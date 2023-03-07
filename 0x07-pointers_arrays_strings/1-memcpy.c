#include "main.h"
#include <stdio.h>

/**
 * _memcpy - check code
 *@dest: argument
 *@src:argument
 *@n: argument
 * Return: a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
