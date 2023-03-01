#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int start_index = len / 2;

	while (str[len] != '\0')
	{
		len++;
	if (len % 2 == 1)
	{
		start_index++;
	}
	}
	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}
