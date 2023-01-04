#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor
 *  of the number 612852475143
 *  followed by a new line.
 *
 *  Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long div = 2;
	long prim = 0;

	while (num != 1)
	{
		if (num % div == 0)
		{
			num = num / div;
			prim = div;
		}
		div += 1;
	}
	printf("%ld\n", prim);
	return (0);
}
