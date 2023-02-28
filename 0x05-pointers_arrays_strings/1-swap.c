#include "main.h"
/**
* swap_int: swaps the value of two integers
* @a: argument 1
* @b: argument 2
*
* Returns: void
*/
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
