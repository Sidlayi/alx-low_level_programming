include "main.h"

/**
* get_bit - A function that returns the value of a bit at a given index.
* @n: first parameter
* @index: second parameter
*
* Return: value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
		return (0);

	for (x = 0; x < 64; n >>= 1, x++)
	{
		if (index == x)
		{
			return (n & 1);
		}
	}
	return (-1);
}
