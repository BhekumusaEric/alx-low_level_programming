#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - combines and  n bytes of a string to the other ...
* @s1: string to will be append to
* @s2: string to combine from
* @n: number of bytes from s2 to concatenate to s1 ....
* Return: pointer to the resulting string ......
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	char *stringi;

	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		stringi = malloc(sizeof(char) * (len1 + n + 1));

	else
		stringi = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!stringi)
		return (NULL);

	while (i < len1)
	{
		stringi[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
		stringi[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		stringi[i++] = s2[j++];

	stringi[i] = '\0';
	return (stringi);
}
