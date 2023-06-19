#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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
