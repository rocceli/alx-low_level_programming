#include "main.h"
#include <stdio.h>

/**
 * wildcmp - check code
 *@s1:argument
 *@s2:argument
 * Return: Always int
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
		if ((*s1 == '\0') && (*s2 == '\0'))
			return (1);
	}
	else
		return (0);
}
