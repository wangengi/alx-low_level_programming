#include "main.h"

/**
 * print_alphabet - prints the alpabet in lowercase
 * followed by a new line
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

