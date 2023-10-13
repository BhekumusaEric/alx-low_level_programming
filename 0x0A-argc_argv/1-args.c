#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the programeee ..   
 * @argc: number of arguments   vv
 * @argv: array of argumentszz  s
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
