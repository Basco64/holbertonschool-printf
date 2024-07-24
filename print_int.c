#include "main.h"
#include <limits.h>

void print_int_recursive(int num, int *count);
/**
 * print_int - Fonction pour imprimer un entier
 * @args: variable contenant le chiffre à imprimer
 * @count: variable qui compte le nombre de caractère imprimé
*/
void print_int(va_list args, int *count)
{
int num = va_arg(args, int);
if (num == INT_MIN)
{
	_putchar('-');
	_putchar('2');
	num = 147483648;
}

if (num < 0) /* si num est négatif */
{
	_putchar('-'); /* print '-' */
	(*count)++; /* incrémente count de 1 */
	num = -num; /* puis convertie num en entier positif */
}
if (num / 10) /* vérifie si num à plus d'un chiffre ex : 123 / 10 = 12 */
{
	print_int_recursive(num / 10, count); /* appelle la fonction print_recursive*/
	/* print_recursive va gérer tous les chiffres sauf le dernier */
	/* exemple avec 123 : print_recursive(12, count). Car 123 / 10 = 12 */
	/* la suite se passe dans la fonction print_recursive */
}
_putchar(num % 10 + '0'); /* Affiche le dernier chiffre de num */
/* comme nous avons envoyé dans l'exemple de 123 seulement 12 */
/* après que la fonction print_récursion ai print 1 et 2 */
/* il faut maintenant affiché le chiffre des unitée */
/* en récupérant puis en affichant le résultat du modulo de num */
(*count)++; /* incrémente le compteur de caractères affichés */
}

/**
 * print_int_recursive - Affiche un entier de manière récursive
 * @num: L'entier à afficher
 * @count: Ptr vers une variable qui compte le nombre de caractères imprimés
 */
void print_int_recursive(int num, int *count)
{
	if (num / 10) /* vérifie que num % 10 a plus d'un chiffre */
	/* dans notre exemple 12: 12 / 10 = 1 donc la condition est vrai */
	{
	print_int_recursive(num / 10, count);
	/* appelle récursivement "print_recursive" avec num / 10 */
	/* dans notre cas il appelera print_recursive(1, count) */
	/* si le num avait été plus grand la fonction aurais continuée */
	/* jusqu'au moment ou le chiffre aurait été réduit à 1 (chiffre) */
	}
	_putchar(num % 10 + '0');
	/* Print le dernier chiffre de num après récursion */
	(*count)++; /* incrémente count de 1 */
}
