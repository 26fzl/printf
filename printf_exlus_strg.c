#include "main.h"
/**
 * printf_exclusive_string - print exclusiuve string.
 * @val: argument.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list val)
{
	char *s;
	int w, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (w = 0; s[w] != '\0'; w++)
	{
		if (s[w] < 32 || s[w] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[w];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(cast);
		}
		else
		{
			_putchar(s[w]);
			len++;
		}
	}
	return (len);
}
