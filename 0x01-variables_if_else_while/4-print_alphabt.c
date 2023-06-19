#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * description - Print all the letters except q and e
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int low, e, q;

	e = 'e';

	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');
	return (0);
}
