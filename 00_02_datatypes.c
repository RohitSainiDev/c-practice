#include <stdio.h>

int main()
{
    /*
    Data Types in C                         Size in bytes

    1. char or signed char                  1

    2. Unsigned char                        1

    3. int or signed int                    2

    4. Unsigned int                         2

    5. Short int or signed short int        2

    6. Unsigned short int                   2

    7. Long int or Signed long int          4

    8. Unsigned long int                    4

    9. float                                4

    10. double                              8

    11. Long double                         10

    Important note: The sizes shown in the table are for a specific system. These can vary across different platforms, compilers, and architectures. For example, on many modern 64-bit systems, int is typically 4 bytes, not 2 bytes.

    To ensure consistent sizes regardless of platform, C99 introduced fixed-width integer types in <stdint.h> like int8_t, uint16_t, int32_t, etc., where the number indicates the exact bit width.
    */

    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of unsigned char: %zu bytes\n", sizeof(unsigned char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of short int: %zu bytes\n", sizeof(short int));
    printf("Size of unsigned short int: %zu bytes\n", sizeof(unsigned short int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of unsigned long int: %zu bytes\n", sizeof(unsigned long int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // %zu is a specific type specifier to print results of sizeof operations.
    // There is no boolean or string type in C. It also doesnot have classes and objects.

    return 0;
}
