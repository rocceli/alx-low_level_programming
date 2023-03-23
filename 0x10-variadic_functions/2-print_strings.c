
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: character seperating the numbers
 * @n: total number of strings to print
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *current_string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		current_string = va_arg(strings, char *);
		if (current_string != NULL)
			printf("%s", current_string);
		else
			printf("(nil)");
		if (((i + 1) < n) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
