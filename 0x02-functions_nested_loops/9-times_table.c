#include "main.h"
/**
 * times_table - generates the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j < 10)
			{
				_putchar(' ');
			}
			if (j < 9)
			{
				_putchar((j * i) + '0');
				if (j < 9)
				{
					_putchar(',');
				}
				_putchar(' ');
			}
			else
			{
				_putchar((j * i / 10) + '0');
				_putchar((j * i % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
