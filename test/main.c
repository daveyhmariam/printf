#include "../main.h"
#include <limits.h>

/**
 * main - test
 *
 * Return: 0
 *
 */

 int main()
 {
        int num1, num2;
        

        num2 =_printf("%r", "\nThis sentence is retrieved from va_args!");
        num1 = printf("%r", "\nThis sentence is retrieved from va_args!");

        printf("%d %d \n", num2, num1);
        return (0);
 }