#include "holberton.h"

/**
 * print_numbers - prints integers and decimal numbers.
 * @n: the given number to print.
 * Return: number of bytes required to print int stdout.
 */
int print_numbers(va_list n)
{
	unsigned int op = 1, div = 0;
	int number, count = 0;

	number = va_arg(n, int);

	if (number < 0)
	{
		write(1, "-", 1);
		count++;
		number *= -1;
	}

	div = number;

	while (div > 9)
	{
		op *= 10;
		div /= 10;
	}

	for (; op >= 1; op /= 10)
	{
		_putchar(((number / op) % 10) + '0');
		count++;
	}
	return (count);
}

/**
 * print_unsigned - prints an unsigned integer.
 * @n: the given number to print.
 * Return: number of bytes required to print in stdout.
 */
int print_unsigned(va_list n)
{
	unsigned int op = 1, div = 0, count = 0;
	unsigned int number = va_arg(n, int);

	div = number;

	while (div > 9)
	{
		op *= 10;
		div /= 10;
	}

	for (; op >= 1; op /= 10)
	{
		_putchar(((number / op) % 10) + '0');
		count++;
	}
	return (count);
}

/**
 * print_octal - converts an integer into an octal, and prints it.
 * @o: the given number to convert.
 * Return: number of bytes required to print in stdout.
 */
int print_octal(va_list o)
{
	unsigned int octal[16];
	unsigned int number = 0;
	int i = 0, count = 0;

	number = va_arg(o, unsigned int);

	if (number == 0)
	{
		_putchar(number + '0');
		count++;
	}
	else
	{
		while (number > 0)
		{
			octal[i] = number % 8;
			number /= 8;
			i++;
		}
		for (--i; i >= 0; i--)
		{
			_putchar(octal[i] + '0');
			count++;
		}
	}
	return (count);
}

/**
 * print_HEX - converts an integer into hexadecimal in lowercase, and prints it.
 * @X: the given number to convert.
 * Return: number of bytes required to print in stdout.
 */
int print_HEX(va_list X)
{
	char hex[16];
	unsigned int number = 0, count = 0;
	int i = 0;

	number = va_arg(X, unsigned int);

	if (number == 0)
	{
		write(1, "0", 1);
		count++;
	}
	while (number > 0)
	{
		if (number % 16 >= 10 && number % 16 <= 15)
			hex[i] = 55 + number % 16;
		else
			hex[i] = 48 + number % 16;

		number /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hex[i]);
		count++;
	}
	return (count);
}

/**
 * print_hex - converts an integer into hexadecimal in lowercase, and prints it.
 * @x: the given number to convert.
 * Return: number of bytes required to print in stdout.
 */
int print_hex(va_list x)
{
	char hex[16];
	unsigned int number = 0;
	int i = 0, count = 0;

	number = va_arg(x, unsigned int);

	if (number == 0)
	{	
		write(1, "0", 1);
		count++;
	}
	while (number > 0)
	{
		if (number % 16 >= 10 && number % 16 <= 15)
			hex[i] = 87 + number % 16;
		else
			hex[i] = 48 + number % 16;
	
		number /= 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		_putchar(hex[i]);
		count++;
	}
	return (count);
}
