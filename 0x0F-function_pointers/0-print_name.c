#include <stdlib.h>

/**
 * print_name - check code
 *@name: name to be printed
 *@f: function pointer to print_name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
