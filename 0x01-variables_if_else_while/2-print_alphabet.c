#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)

{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
