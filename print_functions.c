#include <stdarg.h>
#include "main.h"
/**
 * print_int - prints int
 * @arg: list of arguments
 * @count: counter
 * Return: int value of the input
 */
int print_int(va_list arg, int count)
{
	int n = va_arg(arg, int);
	char buffer[12];
	int i = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		count += _putchar('0');
	} else
	{
		while (n > 0)
		{
			buffer[i++] = (n % 10) + '0';
			n /= 10;
		}
		while (i > 0)
		{
			count += _putchar(buffer[--i]);
		}
	}
	return (count);
}

/**
 * print_string - prints string
 * @arg: argument list
 * @count:counter
 * Return: int value of theinput
 */
int print_string(va_list arg, int count)
{
	char *s = va_arg(arg, char*);

	while (*s)
	{
		count += _putchar(*s++);
	}
	return (count);
}

/**
 * print_char - prints char
 * @arg: argument list
 * @count: char counter
 * Return: count
 */
int print_char(va_list arg, int count)
{
	char c = (char)va_arg(arg, int);

	count += _putchar(c);

	return (count);
}

/**
 * print_binary - handle specifier %b
 * @arg: arguments
 * @count: counter
 * Return: count
 */
int print_binary(va_list arg, int count)
{
	int i, j;
	unsigned int n;
	int bits[32];


	n = va_arg(arg, unsigned int);

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}
	i = 0;
	while (n > 0)
	{
		bits[i++] = n % 2;
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		count += _putchar(bits[j] + '0');
	}
	return (count);
}
