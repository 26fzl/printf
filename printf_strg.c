#include "main.h"
/**
 * printf_string - printing a string.
 * @val: argument.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *s;
	int x, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
}
