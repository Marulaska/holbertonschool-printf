#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printc - print char
 * @arg: input char
 * Return: Always 1
 */

int _printc(va_list arg)
{
	char c = va_arg(arg, int);

	if (c != 0)
	{
		_putchar (c);
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _prints - print string
 * @arg: input string
 * Return: len of the string.
 */

int _prints(va_list arg)
{

	int index = 0;
	char *s = va_arg(arg, char *);

	while (s[index] != '\0')
	{
		_putchar(s[index]);
		index++;
	}
	return (index);
}

