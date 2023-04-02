#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * _printnull - print char
 * Return: Always 6
 */

int _printnull(void)
{
	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}

/**
 * _printc - print char
 * @arg: input char
 * Return: Always 1
 */

int _printc(va_list arg)
{
	char c = va_arg(arg, int);

	_putchar (c);
	return (1);
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

	if (s == NULL)
		return (_printnull());

	while (s[index] != '\0')
	{
		_putchar(s[index]);
		index++;
	}
	return (index);
}



/**
 * _printi - print integer
 * @arg: input string
 * Return: len of the string.
 */

int _printi(va_list arg)
{
	int a = va_arg(arg, int);

	return (printi_rec(a));
}
