/*Using if statements, relational
3 operators, and equality operators */
#include <stdio.h>
#include <stdlib.h>

/* function main begins program execution */
int main()
{
    int num1; /* first number to be read from user */
    int num2;  /* second number to be read from user */
    int num3;

    printf("Enter two digits and I will tell you the relationship\n");
    printf("the relationship they satisfy\n");

    scanf("%d%d%d", &num1, &num2, &num3); /* The two integers to be read*/

    if (num1 == num2) {
        printf( "%d is equal to %d\n", num1, num2);
    } /* End if */

    if (num1 == num3) {
        printf( "%d is equal to %d\n", num1, num3);
    } /* End if */

    if ( num1!=num2 ) {
        printf( "%d is not equal to %d\n", num1, num2);
    } /* End if */

   if ( num1<num2 ) {
        printf( "%d is less than %d\n", num1, num2);
    } /* End if */

    if ( num1>num2 ) {
        printf( "%d is greater than %d\n", num1, num2);
    } /* End if */

    if ( num1<=num2 ) {
        printf( "%d is less or equal to %d\n", num1, num2);
    } /* End if */

   if ( num1>=num2 ) {
        printf( "%d is greater than or equal to %d\n", num1, num2);
    } /* End if */

    if ( num1%2==0) {
        printf( "%d is even number\n", num1);
    } /* End if */

    if ( num1%2!=0) {
        printf( "%d is odd number\n", num1);
    } /* End if */

    if ( num2%2==0) {
        printf( "%d is even number\n", num2);
    } /* End if */

    if ( num2%2!=0) {
        printf( "%d is odd number\n", num2);
    } /* End if */


    return 0;
}
