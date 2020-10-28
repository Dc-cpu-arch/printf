#include "holberton.h"

int structures(const char *format, int *i, va_list arg)
{
	int counter = 0, j = 0;
	options_t options[] = {
		{"u", print_unsigned},
		{"i", print_numbers},
		{"d", print_numbers},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{NULL, NULL}
	 };

	for (j = 0; options[j].op != NULL; j++)
	{
		if (format[*i + 1] == options[j].op[0])
		{
			cunter += options[j].function(arg);
			*i += 1;
		}
		else (format[*i + 1] == '%')
		{
			_putchar(format[*i + 1]);
			counter++;
			*i += 1;
		}
	}
	return (counter);
}
