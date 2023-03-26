#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list arg, int count);
int print_decimal(va_list arg, int count);
int print_binary(va_list arg, int count);
int print_string(va_list arg, int count);
int print_char(va_list arg, int count);
#endif
