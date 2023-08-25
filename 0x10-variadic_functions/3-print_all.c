#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int ix = 0;
	char *stri, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[ix])
		{
			switch (format[ix])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					stri = va_arg(list, char *);
					if (!stri)
						stri = "(nil)";
					printf("%s%s", sep, stri);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}

