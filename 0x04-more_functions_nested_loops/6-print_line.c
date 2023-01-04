#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal.
 * use the character _
 * @n: The number of _characters to be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
