#include "main.h"
#include <stdio.h>

/**
 * swap_int - check code
 *@a: first variable
 *@b:second variable
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
