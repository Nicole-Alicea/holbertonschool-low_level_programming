#include "function_pointers.h"

/**
 * get_op_func - function will return pointer to the function
 * that corresponds to the operator given as a parameter
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the operator
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
	int i;

	if (s != "+" && s != "-" && s != "*" && s != "/" && s != "%")
	{
		return (NULL);
	}
}
