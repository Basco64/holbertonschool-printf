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
		return;
	while (*str) /* tant que str != '\0' */
	{
		_putchar(*str++); /* print le char pointé par str puis passe au suivant */
		(*count)++; /* incrémente count à chaque caractère print par _putchar */
	}
}
