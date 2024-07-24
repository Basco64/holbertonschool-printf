#include "main.h"

/**
 * print_char - Print the char
 *
 * @args: The arguments
 * @count: The counter
 *
 * Return: Void
 */

void print_char(va_list args, int *count)
{
	_putchar(va_arg(args, int));
	*count += 1;
}
