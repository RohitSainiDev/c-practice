#include <stdio.h>

int main()
{
    int var = 1;

    // Pre-increment operator
    printf("%d \n", ++var);
    // ++var = var + 1, here var = 2 as in case of pre-increment in an expression the value is first incremented and then used

    // Post-increment operator
    printf("%d \n", var++);
    // var++ is also = var + 1, but here var = 2 as in case of post-increment in an expression the value is first used and then incremented. After the execution of this statement the value of var is updated to 3

    // Pre-decrement operator
    printf("%d \n", --var);
    // --var = var - 1, here var = 2 as in case of pre-decrement in an expression the value is first decremented and then used

    // Post-decrement operator
    printf("%d \n", var--);
    // var-- is also = var - 1, but here var = 2 as in case of post-decrement in an expression the value is first used and then decremented. After the execution of this statement the value of var is updated to 1

    return 0;
}