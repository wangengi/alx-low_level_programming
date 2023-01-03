#include "main.h"

/**
 * _islower - function that checks for lowercase characters
 * @c: the ccharacter to be checked
 *
 * Return: 1 if the character is lowercase, 0 if not.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
