#include <stdlib.h>

/**
 * print_name - print a name
 * @name: string to print
 * @f: pointer to a function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
