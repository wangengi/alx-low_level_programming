#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @n: the input number to be computed
 *
 * Return: Absolute value of the intager
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);
}
