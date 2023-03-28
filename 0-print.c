#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _putchar - writes a char to stdout
 * @c: char
 *
 * Returns: int value of the input
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _printf - produces output
 * @format: a character string composed of zero or more directives
 *
 * Description:
 * Returns number of characters printed
 * writes out to standard output. the standard output stream
 *
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

<<<<<<< HEAD
<<<<<<< HEAD
	if (format == NULL)
		return (-1);
=======
>>>>>>> parent of 1f08886... updating 0-print.c
=======
>>>>>>> parent of 1f08886... updating 0-print.c
	va_start(args, format);
	while (*format && *format != '\0')
	{
		if (*format == '%')
		{
			++format;
			if (*format == 'c')
			{
				print_char(args, count);
			} else if (*format == 's')
			{
				print_string(args, count);
			} else if (*format == '%')
			{
				count += _putchar('%');
			} else if (*format == 'd')
			{
				print_int(args, count);
			} else if (*format == 'i')
			{
				print_int(args, count);
			} else if (*format == 'b')
			{
				print_binary(args, count);
			}
		} else
			count += _putchar(*format);
		++format;
	}
	va_end(args);
	return (count);
}
