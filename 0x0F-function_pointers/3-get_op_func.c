#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - directs to the right opperator function
 * @s: the operator as a string
 * Return: pointer to the corresponding function or NULL
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}};

while (ops[i].op)
{
if (*(ops[i].op) == *s && !(*(s + 1)))
{
return (ops[i].f);
}
i++;
}
printf("Error\n");
exit(99);
}
