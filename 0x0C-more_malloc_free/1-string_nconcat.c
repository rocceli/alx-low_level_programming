#include <stdlib.h>

/**
 * _strlen - gets length of a string
 * @str: string
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int a;

	for (a = 0; *str != '\0'; a++)
		str++;
	return (a);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to copy
 *
 * Return: pointer to new string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len_s1, len_s2, len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	if (n >= len_s2)
		len = len_s1 + len_s2 + 1;
	else
		len = len_s1 + n + 1;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];
	for (j = 0; n >= len_s2 ? j < len_s2 : j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
