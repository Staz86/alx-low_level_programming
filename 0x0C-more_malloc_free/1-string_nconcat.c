#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes from s2 to concat
 * Return: a pointer (success), NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len, s2_len, concat_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	concat_len = s1_len + n + 1;
	concat_str = malloc(sizeof(char) * concat_len);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	strcpy(concat_str, s1);
	strncat(concat_str + s1_len, s2, n);

	return (concat_str);
}
