#include "main.h"

/**
 * _abs - Main programm function
 *@c: argument
 * Return: always 0 (Success)
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
		return (c);
	else
		return (c * -1);
}

