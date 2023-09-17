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

	if (buf == '\0')
	return (1);
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
	int count = 0, printed = 0;
	char *schar = va_arg(args, char *);

	if (schar == NULL)
	printed += write(1, "(null)", 6);

	count = str_len(schar);
	printed += write(1, schar, count);
	return (printed);
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

	if (str == NULL)
	return (0);

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

/**
 * print_num - print a number to stdout
 *
 * @args: number
 *
 * Return: int
 *
 */

int print_num(va_list args)
{
	int temp, count = 0, num = va_arg(args, int);
	char chars[BUFF_SIZE];

	if (num < 0)
	{
		chars[0] = '-';
		num *= -1;
		count += 1;
	}
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		count++;
	}
	temp = count - 1;
	while (num)
	{
		chars[temp] = ((num % 10) + '0');
		num /= 10;
		temp--;
	}
	count = write(1, chars, count);
	return (count);
}
