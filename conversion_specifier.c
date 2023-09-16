#include "main.h"


/**
 * conv_specifier - selects a function for a given specifier
 * @format: format string
 * @idx: int pointer to format string index
 * @args: parse arguments from _printf
 * @return: number of printed chracters
*/


int conv_spec(const char *format, int *idx, va_list args)
{
        int find;
        int parse = ++(*idx);
        int printed = 0;
        spec specifier[3] = {    {'c', print_char}, {'s', print_string}, {'%', print_percent}
                         };

        for (find = 0; find < 3 && format[parse] != '\0'; find++)
        {
                
                if (specifier[find].sp == format[parse])
                {
                        printed = specifier[find].func(args);
                }
        }
        return (printed);
}
