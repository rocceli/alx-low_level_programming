#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: old memory pointer
 * @old_size: previous size of memory
 * @new_size: new size of memory
 *
 * Return: new memory pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);
	if (new_size > old_size)
		ptr = malloc(new_size);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
