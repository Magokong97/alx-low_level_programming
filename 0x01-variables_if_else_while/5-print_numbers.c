#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of base 10
 * description - followed by a new line.
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");

	return (0);
}
