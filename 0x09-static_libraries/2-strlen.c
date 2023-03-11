#include "main.h"
#include <stdio.h>

/**
 * _strlen - check code
 *@s:argument
 * Return: Always i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
