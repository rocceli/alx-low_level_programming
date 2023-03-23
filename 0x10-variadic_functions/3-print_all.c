#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format string
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, p;
	char *str;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				p = printf("%c", va_arg(args, int));
				break;
			case 'i':
				p = printf("%d", va_arg(args, int));
				break;
			case 'f':
				p = printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);

				if (str == NULL)
				{
					p = printf("(nil)");
					break;
				}
				p = printf("%s", str);
				break;
		}
		if ((format[i + 1] != '\0') && (p != 0))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
