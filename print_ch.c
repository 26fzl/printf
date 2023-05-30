#include "main.h"
#include <stdlib.h>

/**
 * printf_char - prints the char.
 * @val: the arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

/**
 * print_s - Prints strings
 * @s: Strings
 *
 * Return: The lenght of the string
 */
int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
