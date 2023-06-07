#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - check code
 *@a: argument
 * Return: Always void
 */
void _puts_recursion(char *a)
{

    if (*a == '\0')
    {
        _putchar('\n');
        return;
    }
    else
    {
        _putchar(*a);
        a++;
        _puts_recursion(a);
    }
}