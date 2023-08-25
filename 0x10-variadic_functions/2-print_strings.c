#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * commemts
 * Description: If separator is NULL, it is not printed or else .
 *              If one of the strings if NULL or empty, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *stri;
	unsigned int indexi;

	va_start(strings, n);

	for (indexi = 0; indexi < n; indexi++)
	{
		stri = va_arg(strings, char *);

		if (stri == NULL)
			printf("(nil)");
		else
			printf("%s", stri);

		if (indexi != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

