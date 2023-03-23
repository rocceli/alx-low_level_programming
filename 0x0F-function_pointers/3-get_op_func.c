#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects correct function
 * @s: operator selected by user
 *
 * Return: pointer to correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while ((ops[i].op != NULL) && s != NULL)
	{
		if ((*s == *(ops[i]).op) && *(++s) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
