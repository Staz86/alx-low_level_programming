#include "main.h"
/**
* reset_to_98 - resets an int value to 98
* @n: int pointed to
* Return: void
*/
void reset_to_98(int *n)
{
	int **p = &n;

	**p = 98;
}
