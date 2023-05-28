#include "main.h"
/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list args)
{
	int m = va_arg(args, int);
	int num, last = m % 10, digit, exp = 1;
	int  x = 1;

	m = m / 10;
	num = m;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		m = -m;
		last = -last;
		x++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}

/**
 * printf_dec - The functin prints decimal.
 * @args: argument to print.
 * Return: number of characte.
 */

int printf_dec(va_list args)
{
	int m = va_arg(args, int);
	int num, last = m % 10, digit;
	int  x = 1;
	int exp = 1;

	m = m / 10;
	num = m;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		m = -m;
		last = -last;
		x++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = m;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}
