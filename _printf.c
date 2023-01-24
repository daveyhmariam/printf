#include<stdio.h>
#include<stdarg.h>
#include "main.h"
/**
 * _printf:-prints a formatted outut
 * @format:- a string to be formatted 
 * Return: the number of charcters printed
*/

_int _printf(const char *format, ...)
{
    int i,printed=0,printd_chars=0;
    int flags,width,size,buff_ind=0;
    va_list list;
    char buffer[BUFF_SIZE];
    if(format==NULL)
    {
        return (-1);
    }
    va_start(list,format);
    for(i=0;format && format[i] !='\0';i++)
    {
        if(format[i]!='%')
        {
            buffer[buff_ind++]=format[i];
            if (buffer_ind==BUFF_SIZE)
            {
                print_buffer(buffer,&buff_ind);
            }
        }

    }
}