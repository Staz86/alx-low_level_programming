#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: string value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*p++ = *src++;
		i++;
	}

	while (i < n)
	{
		*p++ = '\0';
		i++;
	}
	return (dest);
}

