#include "main.h"

/**
 * _printf - Début de la fonction printf
 * @format: ptr de chaine de caractères
 * format spécifie comment les arguments vont être convertis
 * Return: Nombres de caractères imprimés
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, j = 0, count = 0; /* i & j sont des variables d'itération */
spec_t spec[] = { /* structure qui associe un caractère à une fonction */
{'%', print_percent},
{'c', print_char},
{'i', print_int},
{'d', print_int},
{'s', print_string},
{'\0', NULL}
};

va_start(args, format);
for (i = 0; format[i] != '\0'; i++) /* Parcourt la string format jusqu'à \0 */
{
	if (format[i] == '%' && format[i + 1] != '\0')
	{
		i++;
		for (j = 0; spec[j].letter != '\0'; j++)
		{
		if (format[i] == spec[j].letter)
		{
		spec[j].function(args, &count); /* Accède à la fonction de spec[j] */
		break;
		}
		}
		if (spec[j].letter == '\0') /* si nous sommes à la fin de la struct */
		{
		_putchar('%');
		_putchar(format[i]);
		count += 2; /* 2 _putchar donc count + 2 */
		}
	}
	else
	{
	_putchar(format[i]); /* si la condition ligne 25 n'est pas vrai */
	(count)++;
	}
}
va_end(args);
return (count);
}
