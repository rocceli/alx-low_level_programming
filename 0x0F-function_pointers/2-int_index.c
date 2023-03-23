#include <stdio.h>

/**
 * int_index - check code
 *@array: of integers
 *@size:of array
 *@cmp:pointer to function
 * Return: index of integer 0r -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
