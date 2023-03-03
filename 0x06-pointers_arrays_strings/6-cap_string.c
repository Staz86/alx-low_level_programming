#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: string
 */
char *cap_string(char *str)
{
	int i;
	int capNext = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (capNext && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		capNext = isspace(str[i]) || str[i] == ',' || str[i] == ';' ||
			str[i] == '.' || str[i] == '!' || str[i] == '?'
			|| str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' || str[i] == '}' ||
			str[i] == '\t' || str[i] == '\n';
	}
	return (str);
}
