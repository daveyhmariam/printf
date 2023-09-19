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
        

        num2 =_printf("%c", '\0');
        num1 = printf("%c", '\0');

        printf("%d %d \n", num2, num1);
        return (0);
 }