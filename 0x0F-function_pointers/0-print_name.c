#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using a function
 *to a pointer
 * @name: string to add
 * @f: pointer to function
 * By: Mpagi Jolly/Jojo-Programming
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
