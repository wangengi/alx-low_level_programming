#include <stdio.h>
/**
 *  main - entry point
 *  Decription: print out sizes of data types
 *  Return: 0 (success)
 */
int main(void)
{

	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of a int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

