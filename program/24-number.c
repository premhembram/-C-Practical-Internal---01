#include <stdio.h>

int main()
{
    float length, width, area;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate area
    area = length * width;
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
