#include "function_pointers.h"
/**
 *print_name - function to call f function
 *@name: name arg
 *@f: function pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;
	f(name);
}
