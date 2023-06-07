#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check the length of a string
 *@a: string to be checked
 *
 * Return: length of string
 */

int _strlen(char *a)
{
	int len;

	len = 0;
	while (*(a + len) != '\0')
		len++;
	return (len);
}

/**
 * str_rev - reverses a string
 * @str: string
 *
 * Return: memory location of reversed string
 */

void *str_rev(char *str)
{
	int len = _strlen(str), i = len - 1, j;
	char *reversed;

	reversed = malloc(sizeof(char) * (len + 1));
	if (reversed == NULL)
		return (NULL);
	for (j = 0; j < len; j++, i--)
		reversed[j] = str[i];
	reversed[j] = '\0';
	return (reversed);
}

/**
 * check_palindrome - check if string is a palindrome
 * @str: string
 * @reversed: reversed string
 *
 * Return: 0 or 1
 */

int check_palindrome(char *str, char *reversed)
{
	if (*str != *reversed)
		return (0);
	if (*str == '\0')
		return (1);

	return (check_palindrome(++str, ++reversed));
}

/**
 * is_palindrome - is string a palindrome
 * @s: string to be checked
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	char *reverse;
	int value;

	if (*s == '\0')
		return (1);
	reverse = str_rev(s);
	value = check_palindrome(s, reverse);
	free(reverse);
	return (value);
}
