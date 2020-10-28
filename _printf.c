#include "holberton.h"

/**
 * _printf - prints a formated string in stdout.
 * @format: string with characters and row data to format.
 * Return: number of characters printed == bytes used in the print.
 */
int _printf(const char *format, ...)
{
	options_t options[] = {
		{"c", print_char},
		{"b", return_binary},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list arg;

	unsigned int i = 0, throwput = 0;

	if (format == NULL || (format[i] == '%' && format[(i + 1)] == '\0') ||
		(format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		throwput += structures(format, &i, arg); 
		else
		{
			_putchar(format[i]);
			throwput++;
		}
	}
	va_end(arg);
	return (throwput);
}
