#include <stdio.h>

int main()
{
    int num;
    unsigned long long factorial = 1;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Ensure the number is non-negative
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate factorial
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }

        // Display the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
