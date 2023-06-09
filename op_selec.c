#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * op_selec - select operation
 * @format: input format
 * @arg: data payload
 * Return: len.
 */
int op_selec(char format, va_list arg)
{
	op_f ops[] = {
		{"c", _printc},
		{"s", _prints},
		{"i", _printi},
		{"d", _printi},
		{NULL, NULL}
	};

	int j;

	j = 0;
	while (ops[j].op != NULL)
	{
		if (*(ops[j].op) ==  format)
			return (ops[j].f(arg));
		j++;
	}
	_putchar('%');
	_putchar(format);
	return (2);
}
