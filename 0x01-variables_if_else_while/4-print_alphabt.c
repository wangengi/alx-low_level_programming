#include <stdio.h>

/**
 * main -  program that prints the alphabet in lowercase
 * Print all the letters except q and e
 *
 * Return: always 0
 */

int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		if (lw != 'e' && lw != 'q')
		putchar(lw);
	}


	putchar('\n');

	return (0);
}

