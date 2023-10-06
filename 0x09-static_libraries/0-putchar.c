#include <unistd.h>


/**
 * _putchar - writes the character c to stdout lib .
 * @c: The character to print on our program  
 *
 * Return: On success 1.
 * On error, -1 is returned, and err_no is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

