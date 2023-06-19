#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{ char Alph;
	for (Alph = 'a'; Alph <= 'z'; Alph++)
	putchar(Alph);
	for (Alph ='A'; Alph <= 'Z'; Alph++)
		putchar(Alph);
	putchar('\n');
	return (0);
}
