#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
<<<<<<< HEAD
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

int print_char(va_list c);
int print_string(va_list str);
int return_binary(va_list num);
char *change_base(int num, int base);
char *reverse(char *num);
char *print_binary(int n);
int _putchar(char c);
=======
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);

int *print_char(va_list c);

int *print_int(va_list integer);

int *print_string(va_list str);

int print_numbers(va_list n);

int print_unsigned(va_list n);

int print_octal(va_list o);

int print_HEX(va_list X);

int print_hex(va_list x);

int _putchar(char c);

int structures(const char *format, int *i, va_list arg);
>>>>>>> origin/camilo

/**
 * struct options_s - structured type to make arrays of options linked to functions
 * @options: pointer to an array with especifiers to functions
 * @function: function pointer to a given function
 */
typedef struct options
{
	char *op;
	int (*function)(va_list);
} options_t;

#endif /* HOLBERTON_H */
