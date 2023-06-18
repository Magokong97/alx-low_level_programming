#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 * Return: always 0 (Success)
 */

int main (void)
{
	char m;
	for  (m = 'a'; m <= 'z'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
