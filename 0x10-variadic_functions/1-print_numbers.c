#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed
 * @n: number of integers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
if (n != 0)
{
va_list args;
unsigned int i;

va_start(args, n);
for (i = 0; i < n - 1; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL)
printf("%s", separator);
}
printf("%d", va_arg(args, int));
va_end(args);
}
printf("\n");
}
