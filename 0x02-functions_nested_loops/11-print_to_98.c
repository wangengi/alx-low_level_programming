#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers fron n to 98
 * @n: number to beggining count from
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
