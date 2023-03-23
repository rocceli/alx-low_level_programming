#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: character seperating the numbers
 * @n: total number of numbers to print
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (((i + 1) < n) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
