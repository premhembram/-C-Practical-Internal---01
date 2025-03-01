#include <stdio.h>

// Function to calculate area and perimeter
void Rectangle(float *length, float *width, float *area, float *perimeter)
{
    *area = (*length) * (*width);            // Area = length × width
    *perimeter = 2 * ((*length) + (*width)); // Perimeter = 2 × (length + width)
}

int main()
{
    float length, width, area, perimeter;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Call the function to calculate area and perimeter
    Rectangle(&length, &width, &area, &perimeter);

    // Display the results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
