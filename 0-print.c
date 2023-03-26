#include <unistd.h>
#include <stdarg.h>

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

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);
				count += _putchar(c);
				break;
			} else if (*format == 's')
			{
				char *s = va_arg(args, char*);
				while (*s)
				{
					count += _putchar(*s++);
				}
				break;
			} else if (*format == '%')
			{
				count += _putchar('%');
				break;
			} else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		} else 
			count += _putchar(*format);
		++format;
	}
	va_end(args);

	return (count);
}
