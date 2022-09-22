#include "main.h"
#include <string.h>

/**
 * _strcat - concanete string
 * @dest: string 1
 * @src: string 2
 *
 * Return:returns pointer to @dest
 */
char*_strcat(char*dest,char*src)
{
	int index = 0, dest_len =0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

return (dest);
}
