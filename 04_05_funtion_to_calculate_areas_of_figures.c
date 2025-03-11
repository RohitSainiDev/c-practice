#include<stdio.h>

// Function to calculate the area of a square
float area_of_square(float side) {
    return side * side;
}

// Function to calculate the area of a rectangle
float area_of_rectangle(float length, float breadth) {
    return length * breadth;
}

// Function to calculate the area of a circle
float area_of_circle(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float side, length, breadth, radius;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("Area of the square is: %.2f\n", area_of_square(side));

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    printf("Area of the rectangle is: %.2f\n", area_of_rectangle(length, breadth));

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of the circle is: %.2f\n", area_of_circle(radius));

    return 0;
}