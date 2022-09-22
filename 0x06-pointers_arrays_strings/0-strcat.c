#include "main.h"
#include <string.h>

/**
 * _strcat - concanete string
 * @dest: string 1
 * @src: string 2
 *
 * Return:returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
