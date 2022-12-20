#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * print the random number and state whether it is positive, negative or zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
Merge branch 'master' of https://github.com/wangengi/alx-zero_day

