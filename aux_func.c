#include "main.h"
#include <limits.h>

/**
 * print_int_min - print integer recursively
 * Return: len.
 */
int print_int_min(void)
{
	_putchar('-');
	_putchar('2');
	_putchar('1');
	_putchar('4');
	_putchar('7');
	_putchar('4');
	_putchar('8');
	_putchar('3');
	_putchar('6');
	_putchar('4');
	_putchar('8');
	return (11);
}

/**
 * printi_rec - print integer recursively
 * @n: input int
 * Return: len.
 */
int printi_rec(int n)
{
	int r;

	if (n == INT_MIN)
		return (print_int_min());

	r = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		r++;
	}
	if (n / 10)
		r += printi_rec(n / 10);
	_putchar((n % 10) + '0');
	return (r + 1);
}

