#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - check code
 *@array: integers
 *@size: of the array
 *@action:pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (array != NULL && action != NULL)
	{
		for (count = 0; count < size; count++)
			action(array[count]);
	}
}
