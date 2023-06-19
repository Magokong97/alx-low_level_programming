#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*The variable n will store a different value every time you run this program*/

/**
 * main - print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int last_d, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;

	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}
	else if (last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_d);
	}
	else if (last_d < 6 && last_d != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	}
	return (0);
}