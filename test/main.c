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
        int num, num2;
       

        num2 = printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
        num = _printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);

        printf("%d %d \n", num, num2);
        return (0);
 }