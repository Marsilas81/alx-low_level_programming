#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declare data types */
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	/* Print  their sizes */
	printf("Size of a char: %d byte(s)\n", sizeof(i));
	printf("Size of an int: %d byte(s)\n", sizeof(j));
	printf("Size of a long int: %d byte(s)\n", sizeof(k));
	printf("Size of a long long int: %d byte(s)\n", sizeof(l));
	printf("Size of a float: %d byte(s)\n", sizeof(m));
	return (0);
}
