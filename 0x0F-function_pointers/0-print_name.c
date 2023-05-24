#include "function_pointers.h"

/**
 * print_name - Print a function pointer
 * @name: string name
 * @f: function pointer takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
