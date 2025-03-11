#include <stdio.h>

// Usage of a function consists of three parts

// 1.Function declaration/prototype
void print_hello();

int main()
{
    // 3. Function call
    print_hello();

    return 0;
}

// 2. Function definition
void print_hello()
{
    printf("Hello I'm a function");
}

// Note that we can define a funtion at the time of declaration only and club the 1 and 2 part together.