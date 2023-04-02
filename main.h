#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_f;

/* prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int _printc(va_list arg);
int _prints(va_list arg);
int op_selec(char format, va_list arg);
#endif

