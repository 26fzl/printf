#include "main.h"

int printf_hex_aux(unsigned long int num);

/**
 * printf_pointer - prints an hexdecimal number.
 * @val: arguments of printf.
 * Return: number of characters printed.
 */
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	unsigned long int i;
	int j;
	int y;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			_putchar(s[y]);
		}
		return (y);
	}

	i = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	j = printf_hex_aux(i);
	return (j + 2);
}
