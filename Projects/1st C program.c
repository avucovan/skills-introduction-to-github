/* Prints a message on the screen */
#include <stdio.h>
int main ()
{
    int number1, number2, total;
    printf ("Just a small step for coders. One giant leap for");
    printf ("programmers!\n");
    printf ("I am learning the C programming language\n");
    printf ("Enter first integer:");
    scanf (" %d", &number1);
    printf ("Emter second integer: ");
    scanf (" %d", &number2);
    total = number1 + number2;
    printf ("%d + %d = %d", number1, number2, total);
    printf("\n");
    return 0;
}
