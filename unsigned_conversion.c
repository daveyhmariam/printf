#include "main.h"

/**
 * unsigned_num - print a number to stdout
 *
 * @args: number
 *
 * Return: int
 *
 */

int unsigned_num(va_list args)
{
	unsigned int printed = 0, temp, count = 0, num = va_arg(args, int);
	char chars[BUFF_SIZE];

	temp = num;

	if (temp == 0)
	printed += write(1, "0", 1);

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
	printed += write(1, chars, count);
	return (printed);
}

/**
 * octal_print - prints binary number
 *
 * @args: va_list
 *
 * Return: integer
 */

int octal_print(va_list args)
{
	char ch, temp, chars[BUFF_SIZE];
	unsigned long int len, i = 0, count = 0, num = va_arg(args, unsigned int);

	if (num < 8)
	{
		ch = (num + '0');
		return (write(1, &ch, 1));
	}

	while (num != 0)
	{
		chars[count] = ((num % 8) + '0');
		num /= 8;
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

/**
 * hexacap_print - prints binary number
 *
 * @args: va_list
 *
 * Return: integer
 */

int hexacap_print(va_list args)
{
	char ch, temp, chars[BUFF_SIZE];
	unsigned long int len, i = 0, count = 0, num = va_arg(args, unsigned int);

	if (num < 16)
	{
		ch = hexa(num, 'A');
		return (write(1, &ch, 1));
	}

	while (num != 0)
	{
		chars[count] = hexa((num % 16), 'A');
		num /= 16;
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

/**
 * hexa - prints binary number
 *
 * @num: int
 * @ch: character
 *
 * Return: character
 */

char hexa(int num, char ch)
{
	char temp;

	if (num <= 9)
	temp = (num + '0');

	if (num > 9)
	{
		switch (num)
		{
			case 10:
			temp = ch;
			break;
			case 11:
			temp = (ch + 1);
			break;
			case 12:
			temp = (ch + 2);
			break;
			case 13:
			temp = (ch + 3);
			break;
			case 14:
			temp = (ch + 4);
			break;
			case 15:
			temp = (ch + 5);
			break;
		}
	}
	return (temp);
}

/**
 * hexalow_print - prints binary number
 *
 * @args: va_list
 *
 * Return: integer
 */

int hexalow_print(va_list args)
{
	char ch, temp, chars[BUFF_SIZE];
	unsigned long int len, i = 0, count = 0, num = va_arg(args, unsigned int);

	if (num < 16)
	{
		ch = hexa(num, 'a');
		return (write(1, &ch, 1));
	}

	while (num != 0)
	{
		chars[count] = hexa((num % 16), 'a');
		num /= 16;
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
