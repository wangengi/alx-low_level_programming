#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * all in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 0; count <= 9; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
