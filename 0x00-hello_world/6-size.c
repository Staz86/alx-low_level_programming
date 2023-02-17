#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of an int: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long: %zu byte\n", sizeof(long long int));
printf("Size of a float: %zu byte\n", sizeof(float));
return (0);
}
