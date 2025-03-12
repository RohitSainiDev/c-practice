#include <stdio.h>

float final_price(float value);

int main()
{
     float value = 100.0f;

     final_price(value);
     printf("The final price is %f\n", final_price(value));
     printf("Value is %f\n", value);

     return 0;
}

float final_price(float value)
{
     return value + (value * 0.18);
}