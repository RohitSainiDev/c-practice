#include <stdio.h>

int main()
{
    int is_monday = 0;
    int is_raining = 1;

    printf("Whether the day is monday or it is raining(1 = true, 0 = false):%d \n", is_raining || is_monday);

    return 0;
}