#include "main.h"
/**
 * _islower - checker lowercase
 * @i: argument
 * Return: 0
 */
int _islower(int i)
{

	if (i >= 'a' && i <= 'z')
		return (1);
	else
		return (0);
}
