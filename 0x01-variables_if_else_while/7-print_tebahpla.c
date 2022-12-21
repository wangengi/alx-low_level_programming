#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * only use the putchar function
 *
 * Return: Always 0
 */

int main(void)
{
	char lw_rev;


	for (lw_rev = 'z'; lw_rev >= 'a'; lw_rev--)
		putchar(lw_rev);

	putchar('\n');

	return (0);
}


