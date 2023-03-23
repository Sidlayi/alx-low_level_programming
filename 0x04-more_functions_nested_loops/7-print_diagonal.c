include "main.h"

/**
 * print_diagonal - enntry point
 * @n: number of times the character \ should be printed
 * Description: print diagonal line
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
