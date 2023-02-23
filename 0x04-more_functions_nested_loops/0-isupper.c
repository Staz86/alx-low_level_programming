#include "main.h"
/**
*_isupper - checks if letter is uopercase
*@c: character to check
* Return: 1
*/
int _isupper(int c)
{
	if (c == 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
