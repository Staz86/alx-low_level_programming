#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: pointer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		char tmp = s[i];

		s[i++] = s[j];
		s[j--] = tmp;
	}
}
