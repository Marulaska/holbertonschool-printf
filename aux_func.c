#include "main.h"
/**
 * printi_rec - print integer recursively
 * @n: input int
 * Return: len.
 */
int printi_rec(int n)
{
	int r;

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

