#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - Return the sum of all its paramters.
  *@n: The number of paramters passed to the function.
  *@...: Avariable number of paramters to caclulate the sum of.
  *
  *Return: if n == 0 - 0.
  *        Otherwise - the sum of all paramters.
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
