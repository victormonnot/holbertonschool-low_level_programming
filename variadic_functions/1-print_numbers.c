#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: a print entre les nombres
 * @n: les int
 * @...: ints a print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int laValeur;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		laValeur = va_arg(args, int);
		printf("%d", laValeur);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
