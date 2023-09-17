#include "main.h"

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

/**
 * binary_print - prints binary number
 *
 * @args: va_list
 *
 * Return: integer
 */

int binary_print(va_list args)
{
	char temp, chars[BUFF_SIZE];
	int len, i = 0, count = 0, num = va_arg(args, unsigned int);

	while (num != 0)
	{
		chars[count] = ((num % 2) + '0');
		num /= 2;
		count++;
	}
	len = count--;

	while (i <= count)
	{
		temp = chars[i];
		chars[i] = chars[count];
		chars[count] = temp;
		count--;
		i++;
	}

	count = write(1, chars, len);
	return (count);
}
