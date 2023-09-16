#include "main.h"

/**
 * print_char - prints char
 *
 * @args: va list
 *
 * Return: integer
 */

int print_char(va_list args)
{
	char buf = va_arg(args, int);
	char *str = &buf;
	int printed = 0;

	printed = write(1, str, 1);
	return (printed);
}

/**
 * print_string - prints string
 *
 * @args: va_list
 *
 * Return: integer
 */

int print_string(va_list args)
{
	int count = 0;
	char *schar = va_arg(args, char *);

	count = str_len(schar);
	count = write(1, schar, count);
	return (count);
}

/**
 * str_len - find string length
 *
 * @str: va_list
 *
 * Return: integer
 */


int str_len(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * print_percent - prints % sign
 *
 * @args: va_list
 *
 * Return: integer
 */


int print_percent(va_list args)
{
	UNUSED args;

	return (write(1, "%", 1));
}
