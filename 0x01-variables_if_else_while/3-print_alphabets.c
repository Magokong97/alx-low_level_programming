#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{ 
	char A;
	for (A = 'a' ; A <= 'z'; A++)
		putchar(A);
	for (A = 'A'; A <= 'Z'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
