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
       

        num2 =_printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
        num = printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");

        printf("%d %d \n", num, num2);
        return (0);
 }