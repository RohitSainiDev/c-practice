#include <stdio.h>

int main()
{
    // 1.Operators:

    // a.Arithmetic operators: +, _, *, /, % (already studied)

    // b.Relational operators: ==, <, <=, >, >=,!=
    printf("Relational operators:\n");

    printf("4 == 5: %d \n", 4 == 5);
    printf("4 < 5: %d \n", 4 < 5);
    printf("4 <= 5: %d \n", 4 <= 5);
    printf("4 > 5: %d \n", 4 > 5);
    printf("4 >= 5: %d \n", 4 >= 5);
    printf("4 != 5: %d \n", 4 != 5); // There should not be a space between'!' and =

    printf("\n");

    // c.Logical operators: &&, ||, !
    printf("Logical operators:\n");

    int true = 1;
    int false = 0;

    printf("AND \n");
    printf("true && false: %d \n", true && false);
    printf("false && true: %d \n", false && true);
    printf("false && false: %d \n", false && false);
    printf("true && true: %d \n", true && true);

    printf("OR \n");
    printf("true || false: %d \n", true || false);
    printf("true || true: %d \n", true || true);
    printf("false || true: %d \n", false || true);
    printf("false || false: %d \n", false || false);

    printf("NOT \n");
    printf("! false: %d \n", !false);
    printf("! true: %d \n", !true);

    // d.Bitwise operators: covered in later programs

    printf("\n");

    // e.Assignment operators: =, +=, -=, *=, /=, %=
    printf("Assignment operators:\n");

    int num_1 = 1;
    int num_2 = 2;

    printf("num_1 += num_2: %d \n", num_1 += num_2);
    printf("num_1 -= num_2: %d \n", num_1 -= num_2);
    printf("num_1 *= num_2: %d \n", num_1 *= num_2);
    printf("num_1 /= num_2: %d \n", num_1 /= num_2);
    printf("num_1 %%= num_2: %d \n", num_1 %= num_2);

    // f.Ternary operator: covered in later programs

    return 0;
}