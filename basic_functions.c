#include "holberton.h"
/**
 * print_char - prints char
 * @c: char to concatenate to buffer
 * Return: char to concatenate to buffer
 */
int print_char(va_list c)
{
	char p[2], *character;

	character = p;

	character[0] = va_arg(c, int);
	character[1] = '\0';

	write(1, character, 2);
	return (0);
}

/**
 * print_string - print_string
 * @a: to print
 * Return: string
 */
int print_string(va_list a)
{
	char *x = NULL;
	int i;

	x = va_arg(a, char *);
	for (i = 0; x[i] != '\0'; i++)
		;
	write(1, x, i);
	return (0);
}
