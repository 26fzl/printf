#include "main.h"

/**
 * printf_oct - print the octal number.
 * @val: the arguments.
 * Return: counter.
 */
int printf_oct(va_list val)
{
	int x;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		array[x] = temp % 8;
		temp /= 8;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
