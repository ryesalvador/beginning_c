#include <stdio.h>

int main()
{
    /* Declare variables to hold an integer and 2 real numbers */
    int x = 17;
    float y = 159;
    float z;
    /* Double the size of x and place the result in x */
    x = x * 2;
    /* Divide y by x and then assign the result to z */
    z = y / x;
    /* Subtract z from y and then assign the result to y */
    y = y - z;
    /* Echo x, y, and z */
    printf("Twice the value of x is %d.\n", x);
    printf("The value of y divided by x is %.2f.\n", z);
    printf("The new value of y is now %.3f.\n", y);
    return 0;
}

