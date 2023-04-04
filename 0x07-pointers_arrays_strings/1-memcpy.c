# include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination value
 * @src: source value
 * @n: number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
