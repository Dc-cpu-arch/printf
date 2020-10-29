#include "holberton.h"
/**
 * structures - matches format specificators with the propper functions.
 * @format: _printf string with specificatos.
 * @i: iterator which comes from main function.
 * @arg: list of arguments entered to _printf.
 * Return: number of bytes used to print in stdout.
 */
int structures(const char *format, unsigned int *i, va_list arg)
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
			counter += options[j].function(arg);
<<<<<<< HEAD
=======
			*i += 1;
		}
		else
			(format[*i + 1] == '%');
		{
			_putchar(format[*i + 1]);
			counter++;
>>>>>>> dce4be4f291a32f78ef204e6003191202fe7b257
			*i += 1;
			break;
		}
	}
	return (counter);
}
