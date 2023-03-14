#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s3 = malloc(s1_len + s2_len + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);
	strcpy(s3 + s1_len, s2);
	return (s3);
}
