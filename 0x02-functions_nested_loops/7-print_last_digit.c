#include "main.h"
/**
 * print_last_digit - finds and prints last digit of a number
 *
 * @c: The number to be checked
 *
 * Return: Last digit from int
 */
int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = c % 10;
	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
