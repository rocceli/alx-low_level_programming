#include "main.h"
#include <stdio.h>

/**
 * _strcat - check code
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
