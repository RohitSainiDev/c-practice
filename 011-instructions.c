#include <stdio.h>
#include <math.h> // Include for pow() function

int main()
{
    // 1.Instructions : These are statements in a program

    // 2.Types of instructions:

    // a.Type declaration instructions:
    int var_1 = 22;
    int var_2 = var_1;
    int var_3 = var_2 + 10;
    int var_4 = 44, var_5;

    int num_1, num_2, num_3; // First declare then use variables
    num_1 = num_2 = num_3 = 1;

    // b.Arithmetic instructions:

    // Only one variable on LHS and an expression on RHS of assignment operator
    int sum = var_1 + var_2; // +,-,*,/,%

    int num_4 = 3;
    int mod = num_4 % 2;      // Modullo works only on integral values
    int mod_2 = (-num_4) % 2; // If numerator is negative remainder is also negative

    int power = pow(num_1, num_2);

    // i.Type conversion (Implicit):
    printf("2 * 2 = %d \n", 2 * 2);
    printf("2 * 2.0 = %f \n", 2 * 2.0);
    printf("2.0 * 2.0 = %f \n", 2.0 * 2.0);
    printf("4 / 2.0 = %f \n", 4 / 2.0);

    // Explicit conversion:
    float dec_num = 1.999999;
    printf("(int) dec_num = %d\n", (int)dec_num);

    // ii.Operator precendence: In a given expression the order in which the operators are evaluated by the compiler is known as operator precedence.

    // iii.Associativity: Operators of same precedence are evaluated from left to right in a given expression.

    printf("%d \n", 5 * 2 - 3 * 2);
    // 5*2 is evaluated first as '*' has more precedence also due to associativity the left multiplication is solved first, then 3*2 is solved and finally both the results are subtracted.

    // c. Control instructions:
    // Statements which can control flow of execution of a program

    // i.Sequence control: All statements which executes sequentially
    // ii.Decision control: if-else
    // iii.Loop control: while, for, do-while
    // iv.Case control: switch-case

    return 0;
}