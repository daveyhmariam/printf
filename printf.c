#include "main.h"


/**
 * _printf - custom printf function
 *
 * @format: format specifier string
 *
 * Return: numbr of printed chars
 *         -1 if fails
*/


int _printf(const char *format, ...)
{
        int idx = 0, buf_idx = 0, printedTotal = 0;
        va_list args;
        char buffer[BUFF_SIZE];
        
        if (format == NULL || format[0] == '\0')
        return (printedTotal);

        va_start(args, format);

        for (; format != NULL && format[idx] != '\0'; idx++)
        {
                if (format[idx] != '%')
                {
                        if (buf_idx == BUFF_SIZE)
                        printedTotal += print_buf(buffer, &buf_idx);
                        
                        buffer[buf_idx++] = format[idx];
                }

                if (format[idx] == '%')
                {
                        printedTotal += print_buf(buffer, &buf_idx);
                        printedTotal += conv_spec(format, &idx, args);
                }
        }
        printedTotal += print_buf(buffer, &buf_idx);
        return (printedTotal);
}


/**
 * print_buf - prints the buffer
 *
 * @buf_idx - pointer to an int
 *
 * Return: number of printed characters
*/

int print_buf(char *buffer, int *buf_idx)
{
        int printed = 0;

        if (buffer != NULL)
        printed = write(1, buffer, *buf_idx);

        *buf_idx = 0;
        return (printed);
}
   
