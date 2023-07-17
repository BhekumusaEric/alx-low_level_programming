#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -entry point
 * Discription - check position of a number
 * return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d n is positive\n", n);
	}
	else if (n == 0)
	{	printf("%d n is zero\n", n);
	}
	else
	{
		printf("%d n is nagative\n", n;);
	}
	return (0);
}
