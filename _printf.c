#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - print to stdout
 * @format: list of types of arguments passed to the function
 * Return: len.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, l;

	va_start(arg, format);
	i = l = 0;

	if (format == NULL)
		return (-1);
	while (format[i] != 0)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			l++;
		}
		else if (format[i + 1] != 0)
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				l++;
			}
			else
			{
				l += op_selec(format[i + 1], arg);
			}
			i++;
		}
		else
		{
			return (-1);
		}
		i++;
	}
	va_end(arg);
	return (l);
}
