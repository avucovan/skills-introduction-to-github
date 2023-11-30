/* This is a program to understand better how the bitwise operators act on different variable types */

#include <stdio.h>

main ()
{
    char x = 0b00000101;
    char a = 0b00001101;
    char y;

// display the value lui x on the screen
 
    printf("x = %d\n", x);
    printf("a = %d\n", a);

    y = x << 1;
    printf("x shifted left by 1 = %d\n", y);
    y = x >>1;
    printf("x shifted right by 1 = %d\n", y);
    y = 1 << x;
    printf("1 shifted left by the value of x = %d\n", y);

    y = x << 2;
    printf("x shifted left by 2 = %d\n", y);

    y = x |= a;
    printf("x XOR a = %d\n", y);
}
