#include "main.h"

/**
 * _printf - gives output based on a format
 * @format:  string
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/

int _printf(const char *format, ...)
{
	int s;
	va_list pars;

	if (format == NULL)
		return (-1);

	s = _strlen(format);
	if (s <= 0)
		return (0);

	va_start(pars, format);
	s = handler(format, pars);

	_putchar(-1);
	va_end(pars);

	return (s);
}
