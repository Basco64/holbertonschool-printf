#include "main.h"

/**
 * print_percent - Print the char '%'
 *
 * @args: The arguments
 * @count: The counter
 *
 * Return: Void
 */

void print_percent(va_list args, int *count)
{
	(void)args;
	_putchar('%');
	*count += 1;
}
