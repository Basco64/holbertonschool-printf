#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct specifier - Standby
 * @letter: Caractère de spécification
 * @function: Pointeur vers la fonction associée
 */
typedef struct specifier
{
	char letter;
	void (*function)(va_list, int*);
} spec_t;

int _printf(const char *format, ...);
void (*get_function(char specifier))(va_list args, int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
void print_percent(va_list args, int *count);
void print_int(va_list args, int *count);
int _putchar(char c);
#endif
