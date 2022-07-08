#ifndef VARFUNC
#define VARFUNC
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separaor, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 *struct typ - Struct operator
 *@c: char
 *@tp: function associated
 */

typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;

#endif
