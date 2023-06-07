#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code
 *
 * Return: Always 0
 */
/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
