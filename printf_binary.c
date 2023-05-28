#include "main.h"

/**
 * printf_bin -The fonction prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int x, i = 1, j;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int j;

	for (x = 0; x < 32; x++)
	{
		j = ((i << (31 - x)) & num);
		if (j >> (31 - i))
			flag = 1;
		if (flag)
		{
			j = p >> (31 - x);
			_putchar(j + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
