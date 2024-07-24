#include "main.h"
/**
 * print_string - Imprime une chaine de caractère donnée
 * @args: Chaine de caractère
 * @count: variable qui compte le nombre de caractère imprimé
*/
void print_string(va_list args, int *count)
{
/* args extrait le prochain argument de type char* de la liste args */
/* et le stocke dans le pointeur str. */
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";


	while (*str)
	{
		_putchar(*str++);
		(*count)++;
	}
}
