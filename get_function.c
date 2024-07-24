#include "main.h"

/**
 * get_functions - Function that determines which function to use
 *
 *@specifier: The char that calls the right function
 *@args: The arguments
 *@count: The counter
 *
 * Return: Pointer to the right function
 */

void (*get_function(char specifier))(va_list args, int *count)
{
	int i;

	spec_t spec[] = {
		{'%', print_percent},
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},
		{'s', print_string},
		{'\0', NULL}
	};

	for (i = 0; spec[i].letter; i++)
	{
		if (specifier == spec[i].letter)
			return (spec[i].function);
	}

	return (NULL);

}
