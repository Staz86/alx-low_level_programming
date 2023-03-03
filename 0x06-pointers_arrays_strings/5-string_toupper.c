#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters  to upper
 * @str: string
 * Return: string
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (islower(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}
	return (str);
}
