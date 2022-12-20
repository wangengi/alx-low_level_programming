#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
* main - assign a random number to the variable n each time it is executed
* print the last digit and  whether it is greater then 5, less than 6 or 0
* Return: Always 0. (success)
*/

int main(void)

{

		int n;
		int lastn;


		srand(time(0));

		n = rand() - RAND_MAX / 2;
		lastn = n % 10;

		if (lastn > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
		}
		else if (lastn == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lastn);
		}
		else if (lastn < 6 && lastn != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
		}

		return (0);

}
