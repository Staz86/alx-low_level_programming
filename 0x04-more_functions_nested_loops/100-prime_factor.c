#include <stdio.h>
#include <stdlib.h>
/**
* main - find largest prime factor
*
* Return: 0
*/
int main(void)
{
	long int num, largestPrime;

	num = 612852475143;
	largestPrime = 2;

	while (num > largestPrime)
	{
		if (num % largestPrime == 0)
		{
			num /= largestPrime;
		}
		else
		{
			largestPrime++;
		}
	}
	printf("%ld\n", largestPrime);

	return (0);

}



