#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int dec;

	for ( dec = '0'; dec <= '9'; dec++)
		putchar(dec);
	putchar('\n');

	return (0);

}
