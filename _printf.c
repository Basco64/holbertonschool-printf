#include "main.h"

/**
 * _printf - Début de la fonction print
 *
 * @format: ptr de chaine de caractère
 * format spécifie comment les arguments vont être convers
 * 
 * Return: Nombres de caractères imprims
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;
	void (*function)(va_list, int*) = NULL;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			function = get_function(format[i]);

			if (function == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else
				function(args, &count);
		}
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			_putchar('%');
			count++;

		} else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
