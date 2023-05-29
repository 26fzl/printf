#include "main.h"

/**
 * printf_bin -The fonction prints a binary number.
 * @val: arguments.
 * Return: number of characters printed.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i;
	unsigned int num = va_arg(val, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 31; i >= 0; i--)
	{
		if ((num >> i) & 1)
			flag = 1;
		
		if (flag)
		{
			_putchar((num >> i) & 1 ? '1' : '0');
			cont++;
		}
	}

	return (cont);
}
