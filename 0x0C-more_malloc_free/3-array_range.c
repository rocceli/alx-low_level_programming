#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minumum value
 * @max: maximum value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr, a;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
		arr[a] = min + a;
	return (arr);
}
